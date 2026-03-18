/*
 * XREFs of VidSchiExecuteMmIoFlipAtISR @ 0x1C00171C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x1C001B450 (VidSchiUpdateCurrentIsrFrameTime.c)
 */

char __fastcall VidSchiExecuteMmIoFlipAtISR(__int64 *a1)
{
  unsigned int *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx

  v2 = (unsigned int *)(a1 + 1);
  *((_DWORD *)a1 + 530) = ((__int64 (__fastcall **)(_QWORD, __int64 *))DxgCoreInterface)[22](
                            *(_QWORD *)(*(_QWORD *)(*a1 + 16) + 1976LL),
                            a1 + 1);
  if ( (a1[70] & 2) != 0 )
  {
    VidSchiUpdateCurrentIsrFrameTime(v3, *(_QWORD *)(*a1 + 8LL * *v2 + 2640), 0LL);
    v4 = *v2;
    v5 = *a1;
    a1[266] = *(_QWORD *)(*(_QWORD *)(*a1 + 8 * v4 + 2640) + 14632LL);
    *((_DWORD *)a1 + 531) = *(_DWORD *)(*(_QWORD *)(v5 + 8 * v4 + 2640) + 14640LL);
  }
  return 1;
}
