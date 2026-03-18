/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C007C3E0
 * Callers:
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 *     zzzDwmStartRedirection @ 0x1C00D24EC (zzzDwmStartRedirection.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0040968 (GreCreateCompatibleBitmapInternal.c)
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C007F5C8 (GreSetRedirectionBitmapOwner.c)
 *     GreDereferenceObject @ 0x1C007F7C0 (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C007F85C (GreSetRedirection.c)
 *     GreReferenceObject @ 0x1C007F8B4 (GreReferenceObject.c)
 *     GreGetSpriteAttributes @ 0x1C007F8F0 (GreGetSpriteAttributes.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C007FA30 (GetWindowMonitorAdapterLuid.c)
 *     DesktopFromDesktopWindow @ 0x1C010C6D8 (DesktopFromDesktopWindow.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, __int64 *a4)
{
  int v4; // edi
  int v6; // r13d
  char v7; // cl
  __int64 result; // rax
  int v11; // eax
  int v12; // ebx
  int v13; // r14d
  int v14; // ebp
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // r14
  unsigned int v18; // r15d
  unsigned __int8 Prop; // al
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // rax
  unsigned __int8 v24; // al
  __int64 v25; // r10
  unsigned __int8 v26; // r8
  __int64 v27; // rax
  struct _BLENDFUNCTION v28; // [rsp+40h] [rbp-38h] BYREF
  struct _LUID v29; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v30; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  v29.LowPart = 0;
  v6 = 0;
  v7 = *(_BYTE *)(a1 + 50);
  result = 0LL;
  v29.HighPart = 0;
  if ( (v7 & 0x20) != 0 )
  {
    *a4 = 0LL;
    return result;
  }
  v11 = *(_DWORD *)(a1 + 288);
  v12 = 0x4000000;
  if ( (v11 & 0x80000) != 0 )
    goto LABEL_42;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 288) = v11 | 0x80000;
LABEL_42:
    v12 = 201326592;
  }
  v13 = 1;
  if ( (v7 & 8) == 0
    || (unsigned int)IsDesktopWindow(a1)
    || (unsigned int)GreGetSpriteAttributes((HDEV)*gpDispInfo, *(HWND *)a1, &v28, &v30, 1) && (v30 & 1) != 0 )
  {
    v12 |= 0x1000000u;
  }
  v14 = 1;
  if ( *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) > 1 )
    v14 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116) > 1 )
    v13 = *(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116);
  if ( !a2 && (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29D )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 88LL);
  }
  else
  {
    if ( (v12 & 0x1000000) == 0 )
      GetWindowMonitorAdapterLuid(a1, &v29);
    v15 = GreCreateCompatibleBitmapInternal(*(_QWORD *)(gpDispInfo + 24LL), v14, v13, v12, &v29);
    v6 = 1;
  }
  if ( !v15 )
  {
    v4 = -2143354872;
    goto LABEL_34;
  }
  v16 = *(_QWORD *)(a1 + 16);
  v17 = 0LL;
  v18 = 0;
  GetTopLevelWindow(a1);
  Prop = GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL);
  if ( (Prop & (unsigned __int8)v20) != 0 )
  {
    v27 = *(_QWORD *)(v16 + 376);
    goto LABEL_44;
  }
  if ( !v21 || a1 == v21 || (v24 = GetProp(v21, v22, v20), (v24 & v26) == 0) )
  {
LABEL_22:
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29D )
    {
      v23 = DesktopFromDesktopWindow(a1);
      if ( !v23 )
        goto LABEL_25;
    }
    else
    {
      v23 = *(_QWORD *)(v16 + 408);
    }
    v17 = *(_QWORD *)(v23 + 40);
LABEL_25:
    GreLockVisRgn(*gpDispInfo);
    if ( v6 )
    {
      v4 = GreReferenceObject(v15);
      if ( v4 < 0 )
      {
LABEL_32:
        GreUnlockVisRgn(*gpDispInfo);
        if ( v4 < 0 )
        {
          GreDeleteObject(v15);
          v15 = 0LL;
        }
        goto LABEL_34;
      }
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(v15) )
    {
      if ( (unsigned int)GreSetRedirection(v15, 1LL) && (unsigned int)GreSetRedirectionBitmapOwner(v15, v17, v18) )
      {
LABEL_30:
        if ( v4 < 0 )
          GreDereferenceObject(v15, 0LL);
        goto LABEL_32;
      }
      GreMarkDeletableBitmap(v15);
    }
    v4 = -2143354871;
    goto LABEL_30;
  }
  v27 = *(_QWORD *)(v16 + 376);
  if ( *(_QWORD *)(*(_QWORD *)(v25 + 16) + 376LL) == v27 )
  {
LABEL_44:
    v18 = *(_DWORD *)(v27 + 56);
    goto LABEL_22;
  }
  GreDeleteObject(v15);
  v15 = 0LL;
  v4 = -1073741790;
LABEL_34:
  *a4 = v15;
  return (unsigned int)v4;
}
