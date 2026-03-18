/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C00637B4
 * Callers:
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     zzzDwmStartRedirection @ 0x1C0093AE4 (zzzDwmStartRedirection.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C00D6A84 (GetWindowMonitorAdapterLuid.c)
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C00D7DE4 (GreSetRedirection.c)
 *     DesktopFromDesktopWindow @ 0x1C00D8CD8 (DesktopFromDesktopWindow.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetSpriteAttributes @ 0x1C011CEA8 (GreGetSpriteAttributes.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C011CFFC (GreSetRedirectionBitmapOwner.c)
 *     GreReferenceObject @ 0x1C011FAC8 (GreReferenceObject.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, HSURF *a4)
{
  int v4; // edi
  int v6; // r13d
  char v7; // cl
  __int64 result; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  HSURF v16; // rbx
  __int64 v17; // rbp
  unsigned __int8 Prop; // al
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned __int8 v22; // al
  __int64 v23; // r10
  unsigned __int8 v24; // r8
  struct _BLENDFUNCTION v25; // [rsp+40h] [rbp-38h] BYREF
  struct _LUID v26; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  v26.LowPart = 0;
  v6 = 0;
  v7 = *(_BYTE *)(a1 + 50);
  result = 0LL;
  v26.HighPart = 0;
  if ( (v7 & 0x20) != 0 )
  {
    *a4 = 0LL;
    return result;
  }
  v11 = *(_DWORD *)(a1 + 288);
  v12 = 0x4000000;
  if ( (v11 & 0x80000) != 0 )
    goto LABEL_6;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 288) = v11 | 0x80000;
LABEL_6:
    v12 = 201326592;
  }
  if ( (v7 & 8) == 0
    || (unsigned int)IsDesktopWindow(a1)
    || (unsigned int)GreGetSpriteAttributes((HDEV)*gpDispInfo, *(HWND *)a1, &v25, &v27, 1) && (v27 & 1) != 0 )
  {
    v12 |= 0x1000000u;
  }
  if ( a2 || !(unsigned int)IsDesktopWindow(a1) )
  {
    if ( (v12 & 0x1000000) == 0 )
      GetWindowMonitorAdapterLuid(a1, &v26);
    v16 = (HSURF)GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 24LL), &v26);
    v6 = 1;
  }
  else
  {
    v16 = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 88LL);
  }
  if ( !v16 )
  {
    v4 = -2143354872;
    goto LABEL_39;
  }
  v17 = *(_QWORD *)(a1 + 16);
  GetTopLevelWindow(a1, v13, v14, v15);
  Prop = GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL);
  if ( (Prop & (unsigned __int8)v19) != 0
    || !v20
    || a1 == v20
    || (v22 = GetProp(v20, v21, v19), (v22 & v24) == 0)
    || *(_QWORD *)(*(_QWORD *)(v23 + 16) + 376LL) == *(_QWORD *)(v17 + 376) )
  {
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29D )
      DesktopFromDesktopWindow(a1);
    GreLockVisRgn(*gpDispInfo);
    if ( v6 )
    {
      v4 = GreReferenceObject(v16);
      if ( v4 < 0 )
        goto LABEL_36;
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(v16) )
    {
      if ( (unsigned int)GreSetRedirection(v16) && (unsigned int)GreSetRedirectionBitmapOwner(v16) )
      {
LABEL_34:
        if ( v4 < 0 )
          GreDereferenceObject(v16);
LABEL_36:
        GreUnlockVisRgn(*gpDispInfo);
        if ( v4 < 0 )
        {
          GreDeleteObject(v16);
          v16 = 0LL;
        }
        goto LABEL_39;
      }
      GreMarkDeletableBitmap(v16);
    }
    v4 = -2143354871;
    goto LABEL_34;
  }
  GreDeleteObject(v16);
  v16 = 0LL;
  v4 = -1073741790;
LABEL_39:
  *a4 = v16;
  return (unsigned int)v4;
}
