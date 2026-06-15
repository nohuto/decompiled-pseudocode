/*
 * XREFs of ?GetFormat@CSystemAudioDeviceOffload@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002C390
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_Ds @ 0x140029210 (WPP_SF_Ds.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x14002BDB8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
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
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_e6e3cf044f7b3ed66ff982009b51436b_Traceguids,
        v5,
        (__int64)"CSystemAudioDeviceOffload::GetFormat");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::GetFormat", 508, v5);
  }
  return (unsigned int)v5;
}
