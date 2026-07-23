/*
 * XREFs of MiUnmapViewOfSection @ 0x14042D2D0
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x14042A038 (AlpcViewDestroyProcedure.c)
 *     NtUnmapViewOfSectionEx @ 0x14042D1D0 (NtUnmapViewOfSectionEx.c)
 *     MiMapViewOfSection @ 0x140431EE0 (MiMapViewOfSection.c)
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 *     MmUnmapViewOfSection @ 0x1404BC290 (MmUnmapViewOfSection.c)
 *     MiUnmapImageInSystemSpace @ 0x140508E5C (MiUnmapImageInSystemSpace.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiCheckSecuredVad @ 0x14040B2AC (MiCheckSecuredVad.c)
 *     PerfLogImageUnload @ 0x140429AFC (PerfLogImageUnload.c)
 *     MiUnmapVad @ 0x14042DDC0 (MiUnmapVad.c)
 *     DbgkUnMapViewOfSection @ 0x1404B4E2C (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MiUnmapViewOfSection(_KPROCESS *a1, __int64 a2, unsigned int a3)
{
  void *v3; // rdi
  int v6; // r14d
  unsigned __int64 v8; // rax
  ULONG_PTR v9; // rbx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
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
    if ( (v10 & 7) == 2 )
      v3 = (void *)((v12 | (v11 << 32)) << 12);
    v14 = *(unsigned int *)(v8 + 28);
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
                v20 = MiReferenceControlAreaFile((__int64)v19);
                if ( (*(_DWORD *)(v9 + 64) & 0x8000000) != 0 )
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
                MiDereferenceControlAreaFile((__int64)v19, v20);
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
