/*
 * XREFs of ?MulIcmSetDeviceGammaRamp@@YAKPEAUDHPDEV__@@KPEAX@Z @ 0x1C0296870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MulIcmSetDeviceGammaRamp(struct DHPDEV__ *a1, unsigned int a2, void *a3)
{
  _QWORD *v3; // rbx
  unsigned int v6; // edi
  __int64 v7; // rax

  v3 = *(_QWORD **)a1;
  v6 = 0;
  while ( v3 )
  {
    v7 = v3[6];
    if ( *(_QWORD *)(v7 + 3256) && (*(_DWORD *)(v7 + 2152) & 0x10) != 0 )
      v6 &= (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(v7 + 3256))(*(_QWORD *)(v7 + 1824), a2, a3);
    v3 = (_QWORD *)*v3;
  }
  return v6;
}
