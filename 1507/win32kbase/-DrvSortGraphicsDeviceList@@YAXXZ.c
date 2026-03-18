/*
 * XREFs of ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C00832D4
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvMoveGraphicsDevice@@YAXPEAUtagGRAPHICS_DEVICE@@00@Z @ 0x1C008337C (-DrvMoveGraphicsDevice@@YAXPEAUtagGRAPHICS_DEVICE@@00@Z.c)
 */

void DrvSortGraphicsDeviceList(void)
{
  wchar_t *v0; // rcx
  struct tagGRAPHICS_DEVICE *v1; // rdx
  struct tagGRAPHICS_DEVICE *v2; // r9
  wchar_t *v3; // r10
  int v4; // eax
  wchar_t *v5; // r11
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  struct tagGRAPHICS_DEVICE *v9; // r10
  bool v10; // zf

  v0 = gpGraphicsDeviceList;
  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( gpGraphicsDeviceList )
  {
    do
    {
      v4 = *((_DWORD *)v0 + 40);
      v5 = (wchar_t *)*((_QWORD *)v0 + 16);
      if ( (v4 & 0x800000) != 0 )
      {
        if ( (v4 & 0x100000) != 0 )
        {
          DrvMoveGraphicsDevice((struct tagGRAPHICS_DEVICE *)v0, v1, 0LL);
          v3 = v0;
          if ( !v2 )
            v2 = (struct tagGRAPHICS_DEVICE *)v0;
          if ( v6 )
          {
            if ( *(wchar_t **)(v6 + 128) != v0 )
              v0 = (wchar_t *)v6;
          }
        }
        else
        {
          if ( v3 && (v7 = *((_QWORD *)v3 + 32)) != 0 && v7 == *((_QWORD *)v0 + 32) )
          {
            DrvMoveGraphicsDevice((struct tagGRAPHICS_DEVICE *)v0, v1, (struct tagGRAPHICS_DEVICE *)v3);
            v10 = v2 == v9;
            v3 = v0;
            if ( v10 )
              v2 = (struct tagGRAPHICS_DEVICE *)v0;
          }
          else
          {
            DrvMoveGraphicsDevice((struct tagGRAPHICS_DEVICE *)v0, v1, v2);
            v2 = (struct tagGRAPHICS_DEVICE *)v0;
          }
          if ( v8 && *(wchar_t **)(v8 + 128) != v0 )
            v0 = (wchar_t *)v8;
        }
      }
      v1 = (struct tagGRAPHICS_DEVICE *)v0;
      v0 = v5;
    }
    while ( v5 );
  }
}
