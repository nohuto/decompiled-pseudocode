/*
 * XREFs of GetDeviceButtons @ 0x1C01CAC24
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C7A40 (CreatePointerDeviceInfo.c)
 *     ?_PopulatePointerDevice@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAXPEAU_HIDP_CAPS@@@Z @ 0x1C01DE340 (-_PopulatePointerDevice@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAXPEAU_HIDP_CAPS@@@Z.c)
 * Callees:
 *     PbuttonToCursor @ 0x1C01CC27C (PbuttonToCursor.c)
 *     AllocatePTPButtons @ 0x1C01CEB64 (AllocatePTPButtons.c)
 */

__int64 __fastcall GetDeviceButtons(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, _WORD *a3, unsigned int a4)
{
  __int64 v4; // rax
  int v7; // r15d
  unsigned int v8; // r14d
  int v9; // r12d
  USHORT v10; // di
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // rbp
  NTSTATUS SpecificButtonCaps; // edi
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r10
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  int UsageMin; // edx
  int v25; // ecx
  bool v26; // zf
  __int64 v27; // rax
  unsigned int v28; // r11d
  __int64 v29; // rax
  int v31; // [rsp+80h] [rbp+8h]
  int v32; // [rsp+84h] [rbp+Ch]
  unsigned int ButtonCapsLength; // [rsp+98h] [rbp+20h] BYREF

  ButtonCapsLength = a4;
  v4 = (unsigned __int16)a3[23];
  v26 = *a3 == 5;
  ButtonCapsLength = (unsigned __int16)a3[23];
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( !v26 )
    v10 = *(_WORD *)(a1 + 716);
  ButtonCaps = (struct _HIDP_BUTTON_CAPS *)Win32AllocPool(72 * v4, 1701344085LL);
  if ( !ButtonCaps )
  {
    SpecificButtonCaps = -1073741668;
    goto LABEL_38;
  }
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, v10, 0, ButtonCaps, (PUSHORT)&ButtonCapsLength, a2);
  if ( SpecificButtonCaps < 0 )
    goto LABEL_36;
  v13 = *(_DWORD *)(a1 + 24);
  v14 = ButtonCapsLength;
  *(_DWORD *)(a1 + 296) = ButtonCapsLength;
  if ( (unsigned int)(v13 - 6) > 1 )
  {
    v15 = *(unsigned int *)(a1 + 704);
    *(_DWORD *)(a1 + 292) = v15;
    if ( v13 == 8 )
      SpecificButtonCaps = AllocatePTPButtons(a1, ButtonCaps, (unsigned int)v14);
    else
      *(_QWORD *)(a1 + 312) = Win32AllocPoolZInit(12 * v15, 2019849045LL);
    if ( SpecificButtonCaps >= 0 && *(_QWORD *)(a1 + 312) )
    {
      v16 = 0;
      if ( *(_DWORD *)(a1 + 292) )
      {
        v17 = g_ulNextCursor;
        do
        {
          v18 = v16;
          ++v17;
          ++v16;
          v19 = 3 * v18;
          *(_DWORD *)(*(_QWORD *)(a1 + 312) + 4 * v19 + 4) = v17;
          *(_DWORD *)(*(_QWORD *)(a1 + 312) + 4 * v19) = 1;
        }
        while ( v16 < *(_DWORD *)(a1 + 292) );
        g_ulNextCursor = v17;
      }
      goto LABEL_35;
    }
LABEL_34:
    SpecificButtonCaps = -1073741668;
    goto LABEL_35;
  }
  *(_DWORD *)(a1 + 292) = 0;
  v20 = Win32AllocPoolZInit(12 * v14, 2019849045LL);
  *(_QWORD *)(a1 + 312) = v20;
  v21 = v20;
  if ( !v20 )
    goto LABEL_35;
  v22 = *(_DWORD *)(a1 + 296);
  if ( !v22 )
    goto LABEL_33;
  v23 = g_ulNextCursor;
  while ( v8 < 2 )
  {
    if ( ButtonCaps[v7].UsagePage == 13 )
    {
      UsageMin = ButtonCaps[v7].Range.UsageMin;
      if ( (unsigned __int16)(UsageMin - 60) <= 9u )
      {
        v25 = 577;
        if ( _bittest(&v25, UsageMin - 60) )
        {
          v26 = (_WORD)UsageMin == 66;
          if ( (_WORD)UsageMin == 66 )
            goto LABEL_26;
          if ( !v8 || ButtonCaps[v8 - 1].Range.UsageMin == 66 )
          {
            v26 = (_WORD)UsageMin == 66;
LABEL_26:
            if ( v26 )
              v9 = 1;
            v27 = v8;
            ++v23;
            ++v8;
            ++*(_DWORD *)(a1 + 292);
            *(&v31 + v27) = v23;
          }
        }
      }
    }
    if ( ++v7 >= v22 )
      break;
  }
  g_ulNextCursor = v23;
  if ( !v9 )
  {
LABEL_33:
    UserLogError(3221225720LL);
    goto LABEL_34;
  }
  *(_DWORD *)(v21 + 4) = v31;
  **(_DWORD **)(a1 + 312) = ((__int64 (*)(void))PbuttonToCursor)();
  if ( v8 > v28 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 312) + 16LL) = v32;
    *(_DWORD *)(*(_QWORD *)(a1 + 312) + 12LL) = PbuttonToCursor(69LL);
  }
LABEL_35:
  *(_DWORD *)(a1 + 300) += *(_DWORD *)(a1 + 296);
LABEL_36:
  Win32FreePool(ButtonCaps);
LABEL_38:
  if ( !*(_DWORD *)(a1 + 296) )
  {
    UserLogError(3221225723LL);
    SpecificButtonCaps = -1073741668;
  }
  if ( SpecificButtonCaps != -1073741668 )
  {
    v29 = Win32AllocPool(2LL * *(unsigned int *)(a1 + 296), 1701344085LL);
    *(_QWORD *)(a1 + 1400) = v29;
    if ( !v29 )
      return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificButtonCaps;
}
