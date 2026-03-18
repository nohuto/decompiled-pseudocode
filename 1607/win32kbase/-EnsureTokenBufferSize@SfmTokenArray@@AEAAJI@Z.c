/*
 * XREFs of ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C004E2D0
 * Callers:
 *     ?AddNotificationToken@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004E400 (-AddNotificationToken@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C004E46C (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall SfmTokenArray::EnsureTokenBufferSize(SfmTokenArray *this, int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // esi
  const void *v6; // rbp
  void *v7; // rax
  int v8; // edx

  v2 = 0;
  v4 = 32 * (((unsigned int)(a2 + *((_DWORD *)this + 3)) >> 5) + 1);
  if ( v4 > *((_DWORD *)this + 4) )
  {
    v6 = *(const void **)this;
    v7 = Win32AllocPoolZInit(1280 * (((unsigned int)(a2 + *((_DWORD *)this + 3)) >> 5) + 1));
    *(_QWORD *)this = v7;
    if ( v7 )
    {
      v8 = *((_DWORD *)this + 4);
      if ( v8 && v6 )
      {
        memmove(v7, v6, (unsigned int)(40 * v8));
        Win32FreePool();
      }
      *((_DWORD *)this + 4) = v4;
    }
    else
    {
      *(_QWORD *)((char *)this + 12) = 0LL;
      return (unsigned int)-1073741801;
    }
  }
  return v2;
}
