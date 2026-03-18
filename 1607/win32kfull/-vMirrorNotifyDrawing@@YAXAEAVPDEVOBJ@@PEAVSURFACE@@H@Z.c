/*
 * XREFs of ?vMirrorNotifyDrawing@@YAXAEAVPDEVOBJ@@PEAVSURFACE@@H@Z @ 0x1C028CCD0
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x1C00F8A40 (vMirrorIncludeNotifyWrap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028C658 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

void __fastcall vMirrorNotifyDrawing(struct PDEVOBJ *a1, struct SURFACE *a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  struct _DISPSURF *i; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  struct _SURFOBJ *v9; // rdx
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v11)(__int64, __int64, __int64, char **); // rax
  __int64 v12; // rcx
  char *v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]

  v4 = a3;
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v5 + 56) & 0x1000000) != 0 )
  {
    for ( i = **(struct _DISPSURF ***)(v5 + 1824); i; i = *(struct _DISPSURF **)i )
    {
      v7 = *((_QWORD *)i + 6);
      if ( v7 && (*(_DWORD *)(v7 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v7 + 2152) & 0x1000) != 0 )
      {
        v8 = *(_QWORD *)(v7 + 1816);
        if ( (*(_DWORD *)(v7 + 2152) & 0x8000) != 0 )
        {
          if ( *(_QWORD *)(v8 + 760) )
          {
            if ( a2 )
              v9 = (struct _SURFOBJ *)((char *)a2 + 24);
            else
              v9 = 0LL;
            DevBitmap = GetDevBitmap(i, v9);
            (*(void (__fastcall **)(struct _SURFOBJ *, __int64, __int64))(*(_QWORD *)(v7 + 1816) + 760LL))(
              DevBitmap,
              7LL,
              v4);
          }
        }
        else
        {
          v11 = *(void (__fastcall **)(__int64, __int64, __int64, char **))(v8 + 808);
          if ( v11 )
          {
            if ( a2 )
              v13 = (char *)a2 + 24;
            else
              v13 = 0LL;
            v12 = *(_QWORD *)(v7 + 1824);
            v14 = v4;
            v11(v12, 1LL, 16LL, &v13);
          }
        }
      }
    }
  }
}
