/*
 * XREFs of ?SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z @ 0x140031410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualProtectedOutput::SetPolicySchemas(
        CVirtualProtectedOutput *this,
        unsigned int a2,
        struct _GUID *a3,
        unsigned int *a4)
{
  int v4; // edi
  int v5; // ebx
  __int64 v6; // r10
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  struct _GUID v12; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( (unsigned int)v6 >= a2 )
      break;
    v8 = a4[v6];
    v12 = a3[(unsigned int)v6];
    v9 = *(_QWORD *)&MFPROTECTION_DISABLE.Data1 - *(_QWORD *)&v12.Data1;
    if ( *(_QWORD *)&MFPROTECTION_DISABLE.Data1 == *(_QWORD *)&v12.Data1 )
      v9 = *(_QWORD *)MFPROTECTION_DISABLE.Data4 - *(_QWORD *)v12.Data4;
    if ( v9 )
    {
      v10 = *(_QWORD *)&MFPROTECTION_CONSTRICTAUDIO.Data1 - *(_QWORD *)&v12.Data1;
      if ( *(_QWORD *)&MFPROTECTION_CONSTRICTAUDIO.Data1 == *(_QWORD *)&v12.Data1 )
        v10 = *(_QWORD *)MFPROTECTION_CONSTRICTAUDIO.Data4 - *(_QWORD *)v12.Data4;
      if ( v10 )
      {
        v5 = -2147467263;
      }
      else
      {
        if ( (v8 & 0xFFFFFF00) != 0 )
        {
LABEL_25:
          v5 = -2147024809;
          goto LABEL_20;
        }
        if ( v4 <= (unsigned __int8)v8 )
          v4 = (unsigned __int8)v8;
      }
    }
    else
    {
      if ( (v8 & 0xFFFFFFFE) != 0 )
        goto LABEL_25;
      if ( (v8 & 1) != 0 && v4 <= 4 )
        v4 = 4;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  while ( v5 >= 0 );
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(CVirtualProtectedOutput *, _QWORD, struct _GUID *, unsigned int *))(*(_QWORD *)this + 40LL))(
           this,
           (unsigned int)v4,
           a3,
           a4);
    if ( v5 >= 0 )
      return (unsigned int)v5;
  }
LABEL_20:
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xDu,
      (__int64)&WPP_6577effb2eb0b4bf7989f7c48aedbf30_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
