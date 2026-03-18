/*
 * XREFs of IopLiveDumpWriteSecondaryData @ 0x1405FDF28
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1405FD944 (IopLiveDumpWriteDumpFile.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     IopLiveDumpWriteBuffer @ 0x1405FD8EC (IopLiveDumpWriteBuffer.c)
 */

__int64 __fastcall IopLiveDumpWriteSecondaryData(void *a1, __int64 a2, LARGE_INTEGER *a3, _QWORD *a4)
{
  __int128 *v4; // rbx
  __int64 v5; // rdi
  int v9; // ecx
  ULONG v10; // r8d
  __int64 v11; // rax
  _DWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+2Ch] [rbp-3Ch]
  unsigned int i; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+34h] [rbp-34h]
  int v18; // [rsp+44h] [rbp-24h]
  int v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+4Ch] [rbp-1Ch]

  v4 = *(__int128 **)(a2 + 8);
  v5 = 0LL;
  if ( v4 )
  {
    qmemcpy(v13, "DumpBlob", sizeof(v13));
    v14 = 16;
    v15 = -268424870;
    v9 = IopLiveDumpWriteBuffer(a1, v13, 0x10u, a3);
    if ( v9 >= 0 )
    {
      v19 = 0;
      v10 = 32;
      v20 = 0;
      v5 = v14;
      for ( i = 32; ; v10 = i )
      {
        v17 = *v4;
        v18 = *((_DWORD *)v4 + 6);
        v9 = IopLiveDumpWriteBuffer(a1, &i, v10, a3);
        if ( v9 < 0 )
          break;
        v5 += i;
        v9 = IopLiveDumpWriteBuffer(a1, *((void **)v4 + 2), *((_DWORD *)v4 + 6), a3);
        if ( v9 < 0 )
          break;
        v11 = *((unsigned int *)v4 + 6);
        v4 = (__int128 *)*((_QWORD *)v4 + 4);
        v5 += v11;
        if ( !v4 )
          break;
      }
    }
  }
  else
  {
    v9 = 0;
  }
  if ( a4 )
    *a4 = v5;
  return (unsigned int)v9;
}
