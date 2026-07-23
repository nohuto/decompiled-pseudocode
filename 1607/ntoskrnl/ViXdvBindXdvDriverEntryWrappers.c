/*
 * XREFs of ViXdvBindXdvDriverEntryWrappers @ 0x140705040
 * Callers:
 *     ViXdvDriverLoadImage @ 0x14070515C (ViXdvDriverLoadImage.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 */

char __fastcall ViXdvBindXdvDriverEntryWrappers(__int64 (*a1)(void))
{
  char v1; // bl
  _DWORD *v3; // rax
  _DWORD *v4; // r8
  int v5; // eax
  unsigned int v6; // edx
  int v7; // r10d
  int v8; // esi
  unsigned int v9; // r11d
  char v10; // r9
  __int64 **i; // rax
  int v12; // ecx

  v1 = 0;
  ViXdvEPThunksNoXdvEntry = 0;
  ViXdvEPBound = 0;
  if ( !a1 )
    return 0;
  v3 = (_DWORD *)a1();
  v4 = v3;
  if ( v3 )
  {
    v5 = *v3;
    if ( v5 == 5 )
    {
      v6 = 0;
      v7 = ViXdvEPThunksNoXdvEntry;
      v8 = ViXdvEPBound;
      while ( v6 < v4[1] )
      {
        if ( *(_QWORD *)&v4[2 * v6 + 2] )
        {
          v9 = 0;
          v10 = 0;
          for ( i = &VfXdvIoCallbackThunks; ; i = &(&VfXdvIoCallbackThunks)[2 * v9] )
          {
            v12 = *((_DWORD *)i + 2);
            if ( v12 == 102 || v10 == 1 )
              break;
            if ( v12 == v6 )
            {
              v10 = 1;
              if ( *i )
              {
                **i = *(_QWORD *)&v4[2 * v6 + 2];
                ViXdvEPBound = ++v8;
              }
            }
            ++v9;
          }
        }
        else
        {
          ViXdvEPThunksNoXdvEntry = ++v7;
        }
        ++v6;
      }
      return 1;
    }
    else
    {
      VfUtilDbgPrint("XDV entry point version mismatch: kernel version %d   driver version %d\n", 5, v5);
    }
  }
  return v1;
}
