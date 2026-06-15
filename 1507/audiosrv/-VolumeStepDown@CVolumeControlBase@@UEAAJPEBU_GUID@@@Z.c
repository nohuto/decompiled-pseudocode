/*
 * XREFs of ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z @ 0x180070E00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     floorf_0 @ 0x1800449D6 (floorf_0.c)
 */

__int64 __fastcall CVolumeControlBase::VolumeStepDown(CVolumeControlBase *this, const struct _GUID *a2)
{
  int v4; // ebx
  float v5; // xmm6_4
  __int64 v6; // rdx
  float v8; // [rsp+50h] [rbp+8h] BYREF

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x13u,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids);
  }
  v4 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 112LL))(this, &v8);
  if ( v4 < 0 )
    goto LABEL_11;
  v5 = (float)(*((_DWORD *)this + 3) - 1);
  v8 = floorf_0((float)((float)(v5 * v8) + 0.5) - 1.0) / v5;
  if ( v8 <= 0.0 )
    v8 = 0.0;
  v4 = (*(__int64 (__fastcall **)(CVolumeControlBase *, __int64, const struct _GUID *))(*(_QWORD *)this + 96LL))(
         this,
         v6,
         a2);
  if ( v4 < 0 )
  {
LABEL_11:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x14u,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        v4);
    }
  }
  return (unsigned int)v4;
}
