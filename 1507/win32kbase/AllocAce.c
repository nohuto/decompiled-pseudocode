/*
 * XREFs of AllocAce @ 0x1C0032780
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0032F10 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C0139550 (InitSecurity.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall AllocAce(void *Src, char a2, char a3, int a4, PSID Sid, ULONG *a6)
{
  ULONG v9; // r15d
  ULONG v10; // esi
  unsigned int v11; // ebx
  ULONG v12; // eax
  void *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx

  v9 = RtlLengthSid(Sid);
  v10 = v9 + 8;
  if ( Src )
  {
    v11 = *a6;
    v12 = *a6 + v10;
    if ( v12 >= *a6 )
    {
      v13 = (void *)Win32AllocPoolWithQuota(v12, 1702064981LL);
      v14 = (__int64)v13;
      if ( v13 )
      {
        memmove(v13, Src, v11);
        Win32FreePool(Src);
LABEL_5:
        *a6 = v11 + v10;
        v15 = v14 + v11;
        *(_BYTE *)v15 = a2;
        *(_WORD *)(v15 + 2) = v10;
        *(_BYTE *)(v15 + 1) = a3;
        *(_DWORD *)(v15 + 4) = a4;
        RtlCopySid(v9, (PSID)(v15 + 8), Sid);
        return v14;
      }
    }
  }
  else
  {
    v11 = 0;
    v14 = Win32AllocPoolWithQuota(v10, 1702064981LL);
    if ( v14 )
      goto LABEL_5;
  }
  return 0LL;
}
