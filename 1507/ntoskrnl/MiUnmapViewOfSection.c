/*
 * XREFs of MiUnmapViewOfSection @ 0x1404B72D0
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x140476810 (AlpcViewDestroyProcedure.c)
 *     NtUnmapViewOfSectionEx @ 0x1404B5B90 (NtUnmapViewOfSectionEx.c)
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 *     MiUnmapImageInSystemSpace @ 0x14051BE94 (MiUnmapImageInSystemSpace.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     MmUnmapViewOfSection @ 0x140546ABC (MmUnmapViewOfSection.c)
 *     PsShutdownSystem @ 0x1406C39F0 (PsShutdownSystem.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PerfLogImageUnload @ 0x1404253F4 (PerfLogImageUnload.c)
 *     MiCheckSecuredVad @ 0x1404749C8 (MiCheckSecuredVad.c)
 *     MiUnmapVad @ 0x1404B7570 (MiUnmapVad.c)
 *     DbgkUnMapViewOfSection @ 0x14053B7E4 (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MiUnmapViewOfSection(_KPROCESS *a1, __int64 a2, unsigned int a3)
{
  void *v3; // rdi
  int v6; // r14d
  unsigned __int64 v8; // rax
  ULONG_PTR v9; // rbx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbp
  int v17; // esi
  __int64 *v19; // rsi
  ULONG_PTR v20; // r12
  unsigned int v21; // r8d
  char v22; // dl
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v26[48]; // [rsp+58h] [rbp-70h] BYREF

  v3 = 0LL;
  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0, (__int64)v26);
    v6 = 1;
  }
  v8 = MiObtainReferencedVad(a2, &v25);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 + 48);
    if ( (v10 & 0x8000) != 0 )
    {
      v17 = -1073741799;
LABEL_17:
      MiUnlockAndDereferenceVad((char *)v9);
      goto LABEL_11;
    }
    v11 = *(unsigned __int8 *)(v8 + 32);
    v12 = *(unsigned int *)(v8 + 24);
    v13 = (v12 | (v11 << 32)) << 12;
    v14 = *(unsigned int *)(v8 + 28);
    if ( (v10 & 7) == 2 )
      v3 = (void *)((v12 | (v11 << 32)) << 12);
    v15 = v12 | (v11 << 32);
    v16 = ((v14 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) - v15 + 1) << 12;
    if ( (v10 & 0x4000) != 0 )
    {
      v17 = MiCheckSecuredVad(
              v9,
              v13,
              ((v14 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) - v15 + 1) << 12,
              0x55u);
      if ( v17 < 0 )
        goto LABEL_17;
    }
    if ( (PerfGlobalGroupMask & 4) != 0 )
    {
      if ( v3 )
      {
        if ( a1[1].Header.WaitListHead.Blink )
        {
          if ( a1 != PsInitialSystemProcess && (*(_BYTE *)(v9 + 48) & 0xF8) == 0x38 )
          {
            v19 = **(__int64 ***)(v9 + 72);
            if ( v19 )
            {
              if ( v19[8] )
              {
                v25 = *v19;
                v20 = MI_REFERENCE_CONTROL_AREA_FILE((__int64)v19);
                if ( (*(_DWORD *)(v9 + 64) & 0x10000000) != 0 )
                {
                  LOBYTE(v21) = 0;
                  v22 = 0;
                }
                else
                {
                  v23 = *(unsigned __int8 *)(v25 + 15);
                  v24 = v23 >> 1;
                  v21 = v23 >> 4;
                  v22 = v24 & 7;
                }
                PerfLogImageUnload(
                  (unsigned __int16 *)(v20 + 88),
                  v20,
                  (int)a1[1].Header.WaitListHead.Blink,
                  v3,
                  v16,
                  *(_DWORD *)(*(_QWORD *)(v25 + 56) + 60LL),
                  v21,
                  v22,
                  1u);
                MI_DEREFERENCE_CONTROL_AREA_FILE((__int64)v19, v20);
              }
            }
          }
        }
      }
    }
    MiUnmapVad(v9, a3);
    v17 = 0;
  }
  else
  {
    v17 = v25;
    if ( (_DWORD)v25 == -1073741664 )
      v17 = -1073741799;
  }
LABEL_11:
  if ( v6 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
  if ( v3 )
    DbgkUnMapViewOfSection(a1);
  return (unsigned int)v17;
}
