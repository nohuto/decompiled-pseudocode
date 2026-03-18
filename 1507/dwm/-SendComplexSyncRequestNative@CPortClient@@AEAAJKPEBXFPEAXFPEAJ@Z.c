/*
 * XREFs of ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140005200
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001610 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1400019F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x140003EAA (memcpy_0.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x14000552C (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequestNative(
        HANDLE *this,
        ULONG a2,
        const void *a3,
        __int16 a4,
        void *a5,
        __int16 a6,
        int *a7)
{
  unsigned int v7; // edi
  __int16 v9; // ax
  unsigned __int16 v11; // ax
  struct _PORT_MESSAGE *v14; // rax
  struct _PORT_MESSAGE *v15; // rbx
  NTSTATUS v17; // eax
  int v18; // eax

  v7 = 0;
  v9 = a6;
  if ( a4 > a6 )
    v9 = a4;
  v11 = v9 + 48;
  if ( v11 < 0x2B0u )
    v11 = 688;
  v14 = (struct _PORT_MESSAGE *)HeapAlloc(this[10], 8u, v11);
  v15 = v14;
  if ( v14 )
  {
    v14[1].u1.Length = a2;
    v14->u1.s1.DataLength = a4 + 8;
    v14->u1.s1.TotalLength = a4 + 48;
    if ( (__int16)(a4 + 48) > 512 )
      AssertW(
        0LL,
        L"pMsg->u1.s1.TotalLength <= 512",
        L"LpcVerifyOutgoingPayloadSize",
        L"windows\\dwm\\common\\shared\\lpcshared.h",
        0x136u);
    memcpy_0(&v15[1].DoNotUseThisField, a3, a4);
    v17 = NtRequestWaitReplyPort(this[6], v15, v15);
    v18 = CPortClient::CheckStatus((CPortClient *)this, v17);
    if ( v18 >= 0 )
    {
      if ( (v15[1].u2.ZeroInit & 0x80000000) == 0 && a5 && a6 )
      {
        if ( v15->u1.s1.DataLength == a6 + 8 )
        {
          memcpy_0(a5, &v15[1].DoNotUseThisField, a6);
        }
        else
        {
          v7 = -2147024872;
          MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024872, 0xBAu);
        }
      }
      *a7 = v15[1].u2.ZeroInit;
    }
    else
    {
      v7 = v18 | 0x10000000;
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v18 | 0x10000000, 0xB2u);
    }
    HeapFree(this[10], 0, v15);
    return v7;
  }
  else
  {
    MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024882, 0xA8u);
    return 2147942414LL;
  }
}
