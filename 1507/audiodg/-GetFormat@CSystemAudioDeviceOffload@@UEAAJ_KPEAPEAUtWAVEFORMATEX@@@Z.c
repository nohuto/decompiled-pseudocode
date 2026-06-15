/*
 * XREFs of ?GetFormat@CSystemAudioDeviceOffload@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002E8A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x14002E6EC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetFormat(
        CSystemAudioDeviceOffload *this,
        __int64 a2,
        struct tWAVEFORMATEX **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v5; // ebx
  _DWORD Src[6]; // [rsp+30h] [rbp-38h] BYREF
  GUID v8; // [rsp+48h] [rbp-20h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Src[0] = 196606;
  Src[1] = 48000;
  v8 = GUID_00000001_0000_0010_8000_00aa00389b71;
  Src[3] = 1048580;
  Src[2] = 192000;
  Src[4] = 1048598;
  Src[5] = 3;
  v5 = CloneWaveFormat((const struct tWAVEFORMATEX *)Src, a3);
  LeaveCriticalSection(v3);
  if ( v5 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xEu,
      (__int64)&WPP_defc16d433e2f54121a67667cf2bcce9_Traceguids,
      v5,
      (__int64)"CSystemAudioDeviceOffload::GetFormat");
  }
  return (unsigned int)v5;
}
