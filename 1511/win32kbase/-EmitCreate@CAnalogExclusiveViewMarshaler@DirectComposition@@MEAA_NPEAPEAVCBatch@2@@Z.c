/*
 * XREFs of ?EmitCreate@CAnalogExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DA770
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     OpenDwmHandle @ 0x1C0037370 (OpenDwmHandle.c)
 */

char __fastcall DirectComposition::CAnalogExclusiveViewMarshaler::EmitCreate(
        DirectComposition::CAnalogExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  void *v3; // rcx
  __int64 v4; // r9
  char *v5; // rdx
  int Object; // [rsp+20h] [rbp-18h]
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID v9; // [rsp+50h] [rbp+18h] BYREF
  void *v10; // [rsp+58h] [rbp+20h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v10) )
  {
    v8 = 0LL;
    v3 = (void *)*((_QWORD *)this + 6);
    if ( v3 )
    {
      if ( ObReferenceObjectByHandle(v3, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 1, &v9, 0LL) >= 0 )
        OpenDwmHandle(v9, (POBJECT_TYPE)ExEventObjectType, 2u, v4, Object, &v8);
    }
    v5 = (char *)v10;
    *(_DWORD *)v10 = 28;
    *(_QWORD *)(v5 + 4) = 0LL;
    *(_QWORD *)(v5 + 12) = 0LL;
    *(_QWORD *)(v5 + 20) = 0LL;
    *((_DWORD *)v5 + 1) = 125;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v5 + 5) = *((_DWORD *)this + 11);
    *((_DWORD *)v5 + 6) = *((_DWORD *)this + 10);
    *(_QWORD *)(v5 + 12) = v8;
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
