/*
 * XREFs of MiLogTrimWs @ 0x1400F15D4
 * Callers:
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiFillLogProcessInfo @ 0x1400F1670 (MiFillLogProcessInfo.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401BF978 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401CF38C (_TlgWriteEx.c)
 */

char __fastcall MiLogTrimWs(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  int *VmPartition; // rax
  __int64 v10; // r11
  const struct _TlgProvider_t *v11; // r10
  int v12; // edx
  _QWORD *v13; // r9
  __int64 v14; // r11
  char v15; // al
  TraceLoggingHProvider v16; // r10
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  int v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  LPCSTR psz; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  int *v29; // [rsp+A8h] [rbp-60h]
  int v30; // [rsp+B0h] [rbp-58h]
  int v31; // [rsp+B4h] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-50h] BYREF
  int *v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D4h] [rbp-34h]
  __int64 *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E4h] [rbp-24h]
  __int64 *v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+104h] [rbp-4h]
  __int64 *v45; // [rsp+108h] [rbp+0h]
  int v46; // [rsp+110h] [rbp+8h]
  int v47; // [rsp+114h] [rbp+Ch]
  __int64 *v48; // [rsp+118h] [rbp+10h]
  int v49; // [rsp+120h] [rbp+18h]
  int v50; // [rsp+124h] [rbp+1Ch]
  int *v51; // [rsp+128h] [rbp+20h]
  int v52; // [rsp+130h] [rbp+28h]
  int v53; // [rsp+134h] [rbp+2Ch]
  int *v54; // [rsp+138h] [rbp+30h]
  int v55; // [rsp+140h] [rbp+38h]
  int v56; // [rsp+144h] [rbp+3Ch]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  v5 = &retaddr;
  if ( hProvider )
  {
    VmPartition = MiGetVmPartition(a1);
    LOBYTE(v5) = MiFillLogProcessInfo(v10, &v19, &psz, VmPartition);
    if ( v11->LevelPlus1 > 5 )
    {
      LOBYTE(v5) = TlgKeywordOn(v11, 1uLL);
      if ( (_BYTE)v5 )
      {
        v15 = *(_BYTE *)(v14 + 216);
        v31 = 0;
        LOBYTE(v18) = v15 & 7;
        v23 = v13[736];
        v24 = v13[752];
        v26 = v13[766];
        v21 = a5;
        v30 = v12;
        v29 = &v18;
        v22 = a2;
        v25 = a3;
        v20 = a4;
        TlgCreateSz(&pDesc, psz);
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v47 = 0;
        v50 = 0;
        v53 = 0;
        v56 = 0;
        v36 = &v22;
        v39 = &v25;
        v42 = &v23;
        v45 = &v24;
        v48 = &v26;
        v51 = &v20;
        v33 = &v19;
        v54 = &v21;
        v34 = 4;
        v37 = 8;
        v40 = 8;
        v43 = 8;
        v46 = 8;
        v49 = 8;
        v52 = 4;
        v55 = 4;
        LOBYTE(v5) = TlgWriteEx(v16, &unk_140254429, 0LL, 1u, 0LL, 0LL, 0xCu, &pData);
      }
    }
  }
  return (char)v5;
}
