/*
 * XREFs of ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x18006EBD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     floorf_0 @ 0x1800449D6 (floorf_0.c)
 *     WPP_SF_g @ 0x1800711D8 (WPP_SF_g.c)
 *     WPP_SF_Dd @ 0x18007C094 (WPP_SF_Dd.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeStepInfo(CVolumeControlBase *this, unsigned int *a2, unsigned int *a3)
{
  int v6; // ebx
  unsigned int v8; // r15d
  unsigned int v9; // eax
  float v10; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 && a3 )
  {
    *a2 = 0;
    *a3 = *((_DWORD *)this + 3);
    v6 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 112LL))(this, &v10);
    if ( v6 >= 0 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_g(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          14LL,
          &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids);
      }
      v8 = *((_DWORD *)this + 3) - 1;
      v9 = (int)floorf_0((float)((float)(int)v8 * v10) + 0.5);
      if ( v9 < v8 )
        v8 = v9;
      *a2 = v8;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          15LL,
          &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
          v8,
          *a3);
      }
      return (unsigned int)v6;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x10u,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
