/*
 * XREFs of ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z @ 0x1800491D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CChannel::WindowNodeSetBounds(
        CDataStreamWriter **this,
        int a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  unsigned int v14; // ebx
  int v16; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+34h] [rbp-44h] BYREF
  __int128 v18; // [rsp+38h] [rbp-40h]
  __int128 v19; // [rsp+48h] [rbp-30h]
  __int128 v20; // [rsp+58h] [rbp-20h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(this + 22);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 22));
  v16 = 91;
  memset_0(&v17, 0, 0x34uLL);
  v10 = (__int128)*a3;
  v11 = (__int128)*a4;
  v17 = a2;
  v18 = v10;
  v12 = (__int128)*a5;
  v19 = v11;
  v20 = v12;
  v13 = CChannel::BeginCommand((CChannel *)this, &v16, 0x38u, 0);
  v14 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x7Au);
  else
    CDataStreamWriter::EndItem(this[21]);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v14;
}
