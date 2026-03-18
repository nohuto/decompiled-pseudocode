/*
 * XREFs of MiUnmapViewOfSection @ 0x14041BC60
 * Callers:
 *     MiUnmapImageInSystemSpace @ 0x1403C72A0 (MiUnmapImageInSystemSpace.c)
 *     AlpcViewDestroyProcedure @ 0x1403F4818 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfSection @ 0x140419680 (MiMapViewOfSection.c)
 *     NtUnmapViewOfSectionEx @ 0x14041BF20 (NtUnmapViewOfSectionEx.c)
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 *     MmUnmapViewOfSection @ 0x1404B4044 (MmUnmapViewOfSection.c)
 *     PsShutdownSystem @ 0x140641460 (PsShutdownSystem.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PerfLogImageUnload @ 0x1403F52F4 (PerfLogImageUnload.c)
 *     MiUnmapVad @ 0x14041B2F0 (MiUnmapVad.c)
 *     MiCheckSecuredVad @ 0x14047BB18 (MiCheckSecuredVad.c)
 *     DbgkUnMapViewOfSection @ 0x1404AC188 (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MiUnmapViewOfSection(_KPROCESS *a1, __int64 a2, int a3)
{
  void *v3; // rdi
  int v6; // r14d
  unsigned int *v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
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
  $D4FCF91253F76F57393CBFE908971F67 v26; // [rsp+58h] [rbp-70h] BYREF

  v3 = 0LL;
  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0LL, (__int64)&v26);
    v6 = 1;
  }
  v8 = MiObtainReferencedVad(a2, &v25);
  v9 = (__int64)v8;
  if ( v8 )
  {
    v10 = v8[12];
    if ( (v10 & 0x8000) != 0 )
    {
      v17 = -1073741799;
LABEL_17:
      MiUnlockAndDereferenceVad((PVOID)v9);
      goto LABEL_11;
    }
    v11 = *((unsigned __int8 *)v8 + 32);
    v12 = v8[6];
    v13 = (v12 | (v11 << 32)) << 12;
    if ( (v10 & 7) == 2 )
      v3 = (void *)((v12 | (v11 << 32)) << 12);
    v14 = v8[7];
    v15 = v12 | (v11 << 32);
    v16 = ((v14 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) - v15 + 1) << 12;
    if ( (v10 & 0x4000) != 0 )
    {
      v17 = MiCheckSecuredVad(
              v9,
              v13,
              ((v14 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) - v15 + 1) << 12,
              85LL);
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
    MiUnmapVad(v9, a3, v15);
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
    KiUnstackDetachProcess(&v26, 0LL);
  if ( v3 )
    DbgkUnMapViewOfSection(a1);
  return (unsigned int)v17;
}
