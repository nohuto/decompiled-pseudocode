/*
 * XREFs of ?GetPropertyCount@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@GGPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C01C7008
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 *     RetrieveLinkCollection @ 0x1C01CE16C (RetrieveLinkCollection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GetPropertyCount(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        USHORT a2,
        USHORT a3,
        struct _HIDP_PREPARSED_DATA *PreparsedData)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  USHORT v7; // r14
  NTSTATUS SpecificValueCaps; // esi
  int v10; // r15d
  USHORT v11; // r12
  USHORT v12; // ax
  __int64 v13; // rax
  struct _HIDP_VALUE_CAPS *v14; // rdi
  UCHAR *p_ReportID; // rax
  __int64 v16; // rdx
  USHORT v17; // dx
  USHORT v19; // [rsp+40h] [rbp-79h] BYREF
  USHORT v20[2]; // [rsp+48h] [rbp-71h] BYREF
  USHORT ValueCapsLength; // [rsp+4Ch] [rbp-6Dh] BYREF
  USHORT v22[2]; // [rsp+50h] [rbp-69h] BYREF
  USHORT v23; // [rsp+54h] [rbp-65h]
  int v24; // [rsp+58h] [rbp-61h]
  struct tagHID_POINTER_DEVICE_INFO *v25; // [rsp+60h] [rbp-59h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-49h] BYREF

  v4 = *((_QWORD *)a1 + 89);
  v5 = 0;
  v23 = a2;
  v25 = a1;
  v7 = a3;
  v19 = a3;
  v20[0] = a3;
  v22[0] = 1;
  SpecificValueCaps = -1073741668;
  ValueCapsLength = 0;
  v10 = 0;
  v24 = 0;
  v11 = a2;
  if ( v4 )
  {
    v12 = *(_WORD *)(v4 + 14);
    if ( v12 )
    {
      v11 = v12;
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, v12, 0, 0LL, &ValueCapsLength, PreparsedData);
      if ( SpecificValueCaps == -1072627705 )
      {
        v13 = *((_QWORD *)a1 + 89);
        v20[0] = ValueCapsLength;
        v7 = ValueCapsLength + v19;
        *(_WORD *)(v13 + 44) = ValueCapsLength;
        v24 = 1;
      }
    }
  }
  if ( v7 > 1u )
  {
    v14 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * v7);
    if ( v14 )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 1u, v11, 0x30u, &ValueCaps, v22, PreparsedData);
      if ( SpecificValueCaps >= 0 )
      {
        *((_BYTE *)v25 + 1424) = ValueCaps.ReportID;
        SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, v11, 0, v14, v20, PreparsedData);
        if ( SpecificValueCaps >= 0 )
        {
          if ( v20[0] )
          {
            p_ReportID = &v14->ReportID;
            v16 = v20[0];
            do
            {
              if ( *p_ReportID == ValueCaps.ReportID )
                ++v10;
              p_ReportID += 72;
              --v16;
            }
            while ( v16 );
          }
          if ( v24 )
          {
            SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, v23, 0, &v14[v20[0]], &v19, PreparsedData);
            if ( SpecificValueCaps >= 0 )
            {
              v17 = v20[0];
              if ( v19 )
              {
                do
                {
                  if ( v17 >= v7 )
                    break;
                  if ( v14[v17].ReportID == ValueCaps.ReportID )
                    ++v10;
                  ++v17;
                }
                while ( (unsigned __int16)(v17 - v20[0]) < v19 );
              }
            }
          }
          *((_DWORD *)v25 + 79) = v10;
        }
      }
      Win32FreePool(v14);
    }
  }
  LOBYTE(v5) = SpecificValueCaps >= 0;
  return v5;
}
