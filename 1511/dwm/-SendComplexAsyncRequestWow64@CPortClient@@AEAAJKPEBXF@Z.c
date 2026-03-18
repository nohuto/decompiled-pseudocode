/*
 * XREFs of ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x140001530
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001610 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001960 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x140003F5A (memcpy_0.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1400055AC (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexAsyncRequestWow64(HANDLE *this, ULONG a2, const void *a3, __int16 a4)
{
  unsigned int v4; // r14d
  struct _PORT_MESSAGE *v9; // rax
  struct _PORT_MESSAGE *v10; // rbx
  NTSTATUS v11; // eax
  int v12; // eax

  v4 = 0;
  if ( a3 )
  {
    v9 = (struct _PORT_MESSAGE *)HeapAlloc(this[10], 8u, (unsigned __int16)(a4 + 48));
    v10 = v9;
    if ( v9 )
    {
      v9[1].u1.Length = a2;
      v9->u1.s1.DataLength = a4 + 8;
      v9->u1.s1.TotalLength = a4 + 48;
      if ( (__int16)(a4 + 48) > 512 )
        AssertW(
          0LL,
          L"pMsg->u1.s1.TotalLength <= 512",
          L"LpcVerifyOutgoingPayloadSize",
          L"windows\\dwm\\common\\shared\\lpcshared.h",
          0x136u);
      memcpy_0(&v10[1].DoNotUseThisField, a3, a4);
      v11 = NtRequestPort(this[6], v10);
      v12 = CPortClient::CheckStatus((CPortClient *)this, v11);
      if ( v12 < 0 )
      {
        v4 = v12 | 0x10000000;
        MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v12 | 0x10000000, 0x69u);
      }
      HeapFree(this[10], 0, v10);
      return v4;
    }
    else
    {
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024882, 0x5Fu);
      return 2147942414LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024890, 0x5Cu);
    return 2147942406LL;
  }
}
