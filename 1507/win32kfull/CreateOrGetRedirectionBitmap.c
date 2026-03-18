/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C000DDF8
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C000B580 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     zzzDwmStartRedirection @ 0x1C0149B0C (zzzDwmStartRedirection.c)
 * Callees:
 *     GreGetSpriteAttributes @ 0x1C000BC90 (GreGetSpriteAttributes.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C000BDE4 (GetWindowMonitorAdapterLuid.c)
 *     GreReferenceObject @ 0x1C000BE2C (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C000C01C (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C000C0BC (GreSetRedirection.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C000C124 (GreSetRedirectionBitmapOwner.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     DesktopFromDesktopWindow @ 0x1C00DAC14 (DesktopFromDesktopWindow.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, void *a3, HSURF *a4)
{
  int v4; // edi
  int v6; // r13d
  char v7; // cl
  __int64 result; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ebx
  HSURF v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // r14
  int v17; // r15d
  unsigned __int8 Prop; // al
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int8 v24; // al
  __int64 v25; // r10
  unsigned __int8 v26; // r8
  struct _BLENDFUNCTION v27; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-34h] BYREF
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
  v12 = 0x80000LL;
  v13 = 0x4000000;
  if ( (v11 & 0x80000) != 0 )
    goto LABEL_6;
  if ( (_DWORD)a3 )
  {
    *(_DWORD *)(a1 + 288) = v11 | 0x80000;
LABEL_6:
    v13 = 201326592;
  }
  if ( (v7 & 8) == 0
    || (unsigned int)IsDesktopWindow(a1, 0x80000LL, a3, a4)
    || (unsigned int)GreGetSpriteAttributes((HDEV)*gpDispInfo, *(struct PDEVOBJ **)a1, a3, &v28, &v27, &v30, 1)
    && (v30 & 1) != 0 )
  {
    v13 |= 0x1000000u;
  }
  if ( a2 || !(unsigned int)IsDesktopWindow(a1, v12, a3, a4) )
  {
    if ( (v13 & 0x1000000) == 0 )
      GetWindowMonitorAdapterLuid(a1, (__int64)&v29);
    v14 = (HSURF)GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 24LL), &v29);
    v6 = 1;
  }
  else
  {
    v14 = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 88LL);
  }
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 16);
    v16 = 0LL;
    v17 = 0;
    GetTopLevelWindow(a1);
    Prop = GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL);
    if ( (Prop & (unsigned __int8)v19) != 0 )
    {
      v22 = *(_QWORD *)(v15 + 384);
      goto LABEL_21;
    }
    if ( !v20 || a1 == v20 || (v24 = GetProp(v20, v21, v19), (v24 & v26) == 0) )
    {
LABEL_22:
      if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29D )
      {
        v23 = DesktopFromDesktopWindow(a1);
        if ( !v23 )
        {
LABEL_32:
          GreLockVisRgn(*gpDispInfo);
          if ( v6 )
          {
            v4 = GreReferenceObject(v14);
            if ( v4 < 0 )
            {
LABEL_41:
              GreUnlockVisRgn(*gpDispInfo);
              if ( v4 < 0 )
              {
                GreDeleteObject(v14);
                v14 = 0LL;
              }
              goto LABEL_44;
            }
          }
          if ( (unsigned int)GreMarkUndeletableBitmap(v14) )
          {
            if ( (unsigned int)GreSetRedirection(v14, 1) && (unsigned int)GreSetRedirectionBitmapOwner(v14, v16, v17) )
            {
LABEL_39:
              if ( v4 < 0 )
                GreDereferenceObject(v14, 0);
              goto LABEL_41;
            }
            GreMarkDeletableBitmap(v14);
          }
          v4 = -2143354871;
          goto LABEL_39;
        }
      }
      else
      {
        v23 = *(_QWORD *)(v15 + 416);
      }
      v16 = *(_QWORD *)(v23 + 40);
      goto LABEL_32;
    }
    v22 = *(_QWORD *)(v15 + 384);
    if ( *(_QWORD *)(*(_QWORD *)(v25 + 16) + 384LL) == v22 )
    {
LABEL_21:
      v17 = *(_DWORD *)(v22 + 56);
      goto LABEL_22;
    }
    GreDeleteObject(v14);
    v14 = 0LL;
    v4 = -1073741790;
  }
  else
  {
    v4 = -2143354872;
  }
LABEL_44:
  *a4 = v14;
  return (unsigned int)v4;
}
