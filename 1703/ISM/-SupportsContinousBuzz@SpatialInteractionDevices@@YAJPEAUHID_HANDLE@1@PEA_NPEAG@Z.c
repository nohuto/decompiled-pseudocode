/*
 * XREFs of ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x180067A24
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_W@Z @ 0x1800643B4 (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_W@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAGW4_HIDP_REPORT_TYPE@@@Z @ 0x18006840C (--$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall SpatialInteractionDevices::SupportsContinousBuzz(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        bool *a3,
        unsigned __int16 *a4)
{
  unsigned int v4; // ebp
  unsigned int v8; // ebx
  __int64 v9; // rdx
  ULONG v11; // esi
  _BYTE *v12; // r14
  size_t v13; // r8
  unsigned int v14; // r13d
  __int64 v15; // rdi
  char v16; // al
  int v17; // esi
  __int64 v18; // rsi
  char v19; // al
  ULONG v20; // r8d
  __int64 v21; // rdx
  ULONG v22; // [rsp+20h] [rbp-58h]
  ULONG ReportBufferLength; // [rsp+30h] [rbp-48h] BYREF
  _BYTE *v24; // [rsp+38h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  if ( !this )
  {
    v8 = -2147024809;
    v9 = 785LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 786LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v8 = -2147467261;
    v9 = 787LL;
    goto LABEL_3;
  }
  *(_BYTE *)a2 = 0;
  *(_WORD *)a3 = 0;
  v11 = *((unsigned __int16 *)this + 56);
  v12 = (_BYTE *)*((_QWORD *)this + 29);
  v13 = *((unsigned __int16 *)this + 56);
  ReportBufferLength = v11;
  v24 = v12;
  memset(v12, 0, v13);
  v14 = 0;
  if ( !*((_DWORD *)this + 56) )
    return 0LL;
  while ( 1 )
  {
    v15 = *((_QWORD *)this + 27) + 72LL * v14;
    if ( *(_WORD *)(v15 + 10) == 14 && *(_WORD *)(v15 + 8) == 16 && *(_WORD *)v15 == 10 && !*(_BYTE *)(v15 + 12) )
      break;
LABEL_29:
    if ( ++v14 >= *((_DWORD *)this + 56) )
      return 0LL;
  }
  v16 = *(_BYTE *)(v15 + 2);
  if ( *v12 != v16 )
  {
    *v12 = v16;
    HidD_GetFeature(*((HANDLE *)this + 1), v12, v11);
  }
  v17 = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned short>(
          (int)this,
          (int)&ReportBufferLength,
          v15,
          (int)&v26,
          v22);
  if ( v17 >= 0 )
  {
    if ( (_WORD)v26 == 4100 )
    {
      if ( *((_DWORD *)this + 56) )
      {
        do
        {
          v18 = *((_QWORD *)this + 27) + 72LL * v4;
          if ( *(_WORD *)(v18 + 10) == 14 && *(_WORD *)(v18 + 8) == 17 && *(_WORD *)v18 == 10 && !*(_BYTE *)(v18 + 12) )
          {
            v19 = *(_BYTE *)(v18 + 2);
            if ( *v12 != v19 )
            {
              v20 = ReportBufferLength;
              *v12 = v19;
              HidD_GetFeature(*((HANDLE *)this + 1), v12, v20);
            }
            v17 = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned short>(
                    (int)this,
                    (int)&ReportBufferLength,
                    v18,
                    (int)&v27,
                    v22);
            if ( v17 < 0 )
            {
              v21 = 830LL;
              goto LABEL_34;
            }
            if ( !(_WORD)v27 )
            {
              *(_BYTE *)a2 = 1;
              *(_WORD *)a3 = *(_WORD *)(v15 + 56);
              return 0LL;
            }
          }
          ++v4;
        }
        while ( v4 < *((_DWORD *)this + 56) );
      }
      v4 = 0;
    }
    v11 = ReportBufferLength;
    goto LABEL_29;
  }
  v21 = 816LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v21,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
