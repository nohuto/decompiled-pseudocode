/*
 * XREFs of ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C013B068
 * Callers:
 *     DxgkGetDeviceState @ 0x1C00B1890 (DxgkGetDeviceState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDEVICE::QueryLastCompletedPresentId(
        DXGDEVICE *this,
        __int64 a2,
        struct _D3DKMT_PRESENT_STATS *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx

  v3 = *((_QWORD *)this + 2);
  v5 = *((_QWORD *)this + 354);
  if ( v5 == *(_QWORD *)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, struct _D3DKMT_PRESENT_STATS *))(*(_QWORD *)(*(_QWORD *)(v3 + 400)
                                                                                                  + 8LL)
                                                                                      + 392LL))(
             *((_QWORD *)this + 68),
             a2,
             a3);
  if ( v5 )
    return ADAPTER_DISPLAY::QueryLastCompletedPresentId(*(ADAPTER_DISPLAY **)(v5 + 1984), a2, a3);
  return 3221225485LL;
}
