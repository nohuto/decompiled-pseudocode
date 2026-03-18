/*
 * XREFs of NtGdiGetFontFileInfo @ 0x1C010F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C0110104 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0110120 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C01C14A0 (--0CFixPred@Prediction@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetFontFileInfo(
        unsigned int a1,
        unsigned int a2,
        wchar_t *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 v7; // rsi
  struct PFF *PFFFromId; // rbx
  __int64 v10; // r14
  const wchar_t *v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // r9d
  _BYTE *v15; // rdx
  __int64 v17; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+40h] [rbp-28h]

  v7 = a2;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)v18);
  v17 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  PFFFromId = GetPFFFromId((struct PFT *)gpPFTPublic, a1, 0LL);
  if ( !PFFFromId && gpPFTPrivate )
    PFFFromId = GetPFFFromId((struct PFT *)gpPFTPrivate, a1, 0LL);
  if ( !PFFFromId )
  {
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
    goto LABEL_22;
  }
  v18[0] = PFFFromId;
  ++*((_DWORD *)PFFFromId + 17);
  v19 = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  if ( (unsigned int)v7 >= *((_DWORD *)PFFFromId + 9) )
  {
LABEL_22:
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v18);
    return 87LL;
  }
  _mm_lfence();
  v10 = *(_QWORD *)(*((_QWORD *)PFFFromId + 19) + 8 * v7);
  v11 = &qword_1C015E270;
  if ( *(_QWORD *)(v10 + 80) )
    v11 = *(const wchar_t **)(v10 + 80);
  v12 = 0;
  v13 = -1LL;
  do
    ++v13;
  while ( v11[v13] );
  v14 = 2 * v13 + 18;
  if ( a5 )
  {
    if ( (a5 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (_BYTE *)a5;
    if ( a5 >= W32UserProbeAddress )
      v15 = (_BYTE *)W32UserProbeAddress;
    *v15 = *v15;
    v15[7] = v15[7];
    *(_QWORD *)a5 = v14;
    v12 = 0;
  }
  if ( a3 && a4 >= v14 )
  {
    ProbeForWrite(a3, v14, 8u);
    *(_DWORD *)a3 = *(_DWORD *)v10;
    *((_DWORD *)a3 + 1) = *(_DWORD *)(v10 + 4);
    *((_QWORD *)a3 + 1) = *(unsigned int *)(v10 + 24);
    wcscpy_s(a3 + 8, (a4 - 16) >> 1, v11);
  }
  else
  {
    v12 = 122;
  }
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v18);
  return v12;
}
