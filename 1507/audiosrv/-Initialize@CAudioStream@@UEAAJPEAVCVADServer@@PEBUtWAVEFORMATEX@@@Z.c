/*
 * XREFs of ?Initialize@CAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x180066710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::Initialize(CAudioStream *this, struct CVADServer *a2, const struct tWAVEFORMATEX *a3)
{
  int v3; // ebx

  v3 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)this + 144LL))(this, a3->nChannels);
  if ( v3 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xFu,
      (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
