/*
 * XREFs of ?Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z @ 0x1C006DD6C
 * Callers:
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C006DD38 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall GdiHandleEntryDirectory::Destroy(struct GdiHandleEntryDirectory *a1)
{
  char *v1; // rbx
  int v2; // edi
  __int64 v3; // r12
  unsigned int v4; // eax
  __int64 v5; // r14
  __int64 v6; // r15

  v1 = (char *)a1 + 8;
  v2 = 0;
  do
  {
    if ( *(_QWORD *)v1 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)v1 + 24LL);
      v4 = (unsigned int)(*(_DWORD *)(v3 + 8) + 255) >> 8;
      if ( v4 )
      {
        v5 = 0LL;
        v6 = v4;
        do
        {
          if ( *(_QWORD *)(v5 + *(_QWORD *)v3) )
            Win32FreePool();
          v5 += 8LL;
          --v6;
        }
        while ( v6 );
      }
      Win32FreePool();
      Win32FreePool();
      *(_QWORD *)v1 = 0LL;
    }
    ++v2;
    v1 += 8;
  }
  while ( (unsigned __int64)v2 < 0x100 );
  Win32FreePool();
}
