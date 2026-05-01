/*
 * XREFs of ?ReclaimReleasedCommitLimit@ModernActivationResourceInfo@ExecutionModel@@QEAAX_K00@Z @ 0x180037AE0
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ModernActivationResourceInfo::ReclaimReleasedCommitLimit(
        ExecutionModel::ModernActivationResourceInfo *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v8; // r10
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8

  v5 = (_QWORD *)*((_QWORD *)this + 6);
  while ( v5 != (_QWORD *)((char *)this + 48) && a2 )
  {
    v8 = (_QWORD *)v5[2];
    v9 = a3;
    v10 = a4;
    v11 = a2;
    v12 = v8[218];
    if ( v12 < a3 )
      v9 = v8[218];
    if ( v8[181] < a4 )
      v10 = v8[181];
    if ( v8[182] < a2 )
      v11 = v8[182];
    v8[218] = v12 - v9;
    a3 -= v9;
    a4 -= v10;
    *(_QWORD *)(v5[2] + 1448LL) -= v10;
    *(_QWORD *)(v5[2] + 1456LL) -= v11;
    v5 = (_QWORD *)*v5;
    a2 -= v11;
  }
}
