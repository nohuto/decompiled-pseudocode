/*
 * XREFs of RmpActivityHostOnImportanceChange @ 0x18000D0E0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800102A0 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x18003BD54 (RmpActivityHostOnAppliedResourceSetChange.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     RmpActivityHostActOnProcesses @ 0x18000AE60 (RmpActivityHostActOnProcesses.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpActivityHostSetStoreHighMemoryPriority @ 0x180023A0C (RmpActivityHostSetStoreHighMemoryPriority.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

int __fastcall RmpActivityHostOnImportanceChange(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned int a2,
        const GUID *a3,
        const GUID *a4)
{
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rax
  int v9; // r10d
  int v10; // eax
  const struct _TlgProvider_t *v11; // rcx
  unsigned int v12; // ecx
  const struct _TlgProvider_t *v13; // rcx
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v18; // [rsp+5Ch] [rbp-A4h] BYREF
  int v19; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+64h] [rbp-9Ch] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+78h] [rbp-88h] BYREF
  int v24; // [rsp+7Ch] [rbp-84h] BYREF
  int v25; // [rsp+80h] [rbp-80h] BYREF
  int v26; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v28[3]; // [rsp+90h] [rbp-70h] BYREF
  int v29; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v30; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int16 *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  int *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  int *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  int *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  int *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  int *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  int *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  int *v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  __int64 *v55; // [rsp+190h] [rbp+90h]
  __int64 v56; // [rsp+198h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h]
  __int64 *v60; // [rsp+1D0h] [rbp+D0h]
  __int64 v61; // [rsp+1D8h] [rbp+D8h]
  int *v62; // [rsp+1E0h] [rbp+E0h]
  __int64 v63; // [rsp+1E8h] [rbp+E8h]

  if ( (*((_BYTE *)a1 + 905) & 1) != 0 && (*((_BYTE *)a1 + 20) & 1) == 0 && (*((_BYTE *)a1 + 772) & 0x10) == 0 )
  {
    RmpActivityHostSetStoreHighMemoryPriority();
    *((_DWORD *)a1 + 5) |= 1u;
  }
  if ( (*((_BYTE *)a1 + 904) & 0x40) != 0 )
    RtlWakeAllConditionVariable((char *)a1 + 760);
  LODWORD(v6) = *((_DWORD *)a1 + 226);
  v7 = ((unsigned int)v6 >> 6) & 1;
  if ( (v6 & 0x80u) != 0LL )
  {
    if ( (a2 & 0x80u) == 0 || (LODWORD(v6) = (a2 >> 6) & 1, v7 != (_DWORD)v6) )
      LODWORD(v6) = RmpActivityHostActOnProcesses(
                      a1,
                      512,
                      (unsigned int)a3,
                      (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementApplyForegroundBoost,
                      (_QWORD *)v7);
  }
  if ( *((_DWORD *)a1 + 10) || *((_DWORD *)a1 + 146) != 2 )
    goto LABEL_16;
  memset_0(v28, 0, 0x20uLL);
  v8 = *((_QWORD *)a1 + 75);
  v28[0] = a1;
  v29 = 1;
  v28[2] = *(_QWORD *)(v8 + 24);
  if ( !RmpActivityHostEnumerateResourceSetGetNext(v28) )
    goto LABEL_22;
  while ( RmpActivityHostEnumerateResourceSetGetNext(v28) )
    ;
  if ( v9 == 3 )
LABEL_22:
    v9 = 1;
  v10 = *((_DWORD *)a1 + 226);
  v15 = ((v10 & 0x40) == 0 && ((v10 & 0xEu) < 8 || (v10 & 0x30u) < 0x20) || v9 > 1) && v9 <= 0;
  LODWORD(v6) = (*(__int64 (__fastcall **)(char *, _QWORD, char *, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, int *))(*((_QWORD *)RmSvcGlobals + 10) + 80LL))(
                  (char *)a1 + 512,
                  *((unsigned int *)a1 + 145),
                  (char *)a1 + 48,
                  6LL,
                  -1LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  &v15);
  v17 = v6;
  if ( (unsigned int)dword_1800690A0 > 4 )
  {
    if ( (qword_1800690B0 & 1) != 0 )
    {
      v6 = qword_1800690B8 & 1;
      if ( v6 == qword_1800690B8 )
      {
        v59 = 4LL;
        v58 = &v17;
        v22 = *((_QWORD *)a1 + 3);
        v60 = &v22;
        v16 = v15;
        v62 = &v16;
        v61 = 8LL;
        v63 = 4LL;
        LODWORD(v6) = TlgWrite(v11, &unk_18005D12C, a3, a4, 5u, &pData);
      }
    }
LABEL_16:
    if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 1) != 0 )
    {
      v6 = qword_1800690B8 & 1;
      if ( v6 == qword_1800690B8 )
      {
        v12 = *((unsigned __int16 *)a1 + 452);
        v27 = *((_QWORD *)a1 + 3);
        v31 = &v27;
        v32 = 8LL;
        v23 = a2 & 1;
        v33 = &v23;
        v34 = 4LL;
        v21 = v12 & 1;
        v35 = &v21;
        v36 = 4LL;
        v18 = ((unsigned __int16)a2 >> 1) & 7;
        v37 = &v18;
        v38 = 2LL;
        LOWORD(v16) = ((unsigned __int16)v12 >> 1) & 7;
        v39 = &v16;
        v40 = 2LL;
        LOWORD(v17) = ((unsigned __int16)a2 >> 4) & 3;
        v41 = &v17;
        v42 = 2LL;
        LOWORD(v15) = ((unsigned __int16)v12 >> 4) & 3;
        v43 = &v15;
        v44 = 2LL;
        v24 = ((unsigned __int8)a2 >> 6) & 1;
        v45 = &v24;
        v46 = 4LL;
        v19 = ((unsigned __int8)v12 >> 6) & 1;
        v47 = &v19;
        v26 = (unsigned __int8)a2 >> 7;
        v49 = &v26;
        v25 = (unsigned __int8)v12 >> 7;
        v51 = &v25;
        v20 = BYTE1(a2) & 1;
        v13 = (const struct _TlgProvider_t *)((v12 >> 8) & 1);
        v48 = 4LL;
        v53 = &v20;
        v50 = 4LL;
        v52 = 4LL;
        v54 = 4LL;
        LODWORD(v22) = (_DWORD)v13;
        v55 = &v22;
        v56 = 4LL;
        LODWORD(v6) = TlgWrite(v13, &unk_18005B50C, a3, a4, 0xFu, &v30);
      }
    }
  }
  return v6;
}
