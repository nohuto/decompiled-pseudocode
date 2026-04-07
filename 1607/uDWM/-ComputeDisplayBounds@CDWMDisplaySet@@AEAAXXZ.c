/*
 * XREFs of ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18003EA38
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18001ECC0 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x180041A60 (-IsRectEmpty@@YA_NAEBUtagRECT@@@Z.c)
 */

void __fastcall CDWMDisplaySet::ComputeDisplayBounds(CDWMDisplaySet *this)
{
  struct tagRECT *v1; // r8
  __int64 v2; // r9
  bool v3; // al
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // r11
  int v7; // edx
  LONG v8; // eax
  LONG v9; // eax
  LONG v10; // eax
  LONG v11; // eax

  if ( *((_DWORD *)this + 16) )
  {
    v1 = (struct tagRECT *)((char *)this + 16);
    do
    {
      IsRectEmpty(v1);
      v3 = IsRectEmpty((const struct tagRECT *)(v2 + 56));
      if ( v7 )
      {
        if ( v3 )
        {
          v1->bottom = 0;
          v1->right = 0;
          v1->top = 0;
          v1->left = 0;
        }
        else
        {
          *v1 = *(struct tagRECT *)(v4 + 56);
        }
      }
      else if ( !v3 )
      {
        v8 = *(_DWORD *)(v4 + 56);
        if ( v8 < v1->left )
          v1->left = v8;
        v9 = *(_DWORD *)(v4 + 60);
        if ( v9 < v1->top )
          v1->top = v9;
        v10 = *(_DWORD *)(v4 + 64);
        if ( v10 > v1->right )
          v1->right = v10;
        v11 = *(_DWORD *)(v4 + 68);
        if ( v11 > v1->bottom )
          v1->bottom = v11;
      }
    }
    while ( (unsigned int)(v5 + 1) < *(_DWORD *)(v6 + 64) );
  }
}
