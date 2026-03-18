/*
 * XREFs of ParseFieldConnection @ 0x1C004A0F0
 * Callers:
 *     ParseField @ 0x1C000DD70 (ParseField.c)
 * Callees:
 *     ParseName @ 0x1C00107B0 (ParseName.c)
 *     ParseIntObj @ 0x1C0010B60 (ParseIntObj.c)
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     ParsePackageLen @ 0x1C0013790 (ParsePackageLen.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParseFieldConnection(__int64 a1, __int64 *a2)
{
  _WORD **v2; // rsi
  _BYTE *v3; // rax
  _WORD *v6; // r12
  char **v7; // rcx
  int v8; // eax
  _WORD *v9; // rbp
  unsigned __int64 v10; // rbx
  const void *v11; // rdi
  int v12; // r15d
  int v13; // eax
  char *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  const void *v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v23; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v24[16]; // [rsp+38h] [rbp-170h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-160h]
  char Src[256]; // [rsp+60h] [rbp-148h] BYREF

  v2 = (_WORD **)(a1 + 120);
  v3 = *(_BYTE **)(a1 + 120);
  v6 = 0LL;
  v7 = (char **)(a1 + 120);
  if ( *v3 == 17 )
  {
    *v2 = v3 + 1;
    ParsePackageLen(v7, &v23);
    v8 = ParseIntObj(v2, (__int64)v24, 0LL);
    v9 = (_WORD *)v23;
    v10 = v25;
    v11 = (const void *)v8;
    if ( v8 )
    {
      LogError(v8);
      PrintDebugMessage(40, v11, 0LL, 0LL, 0LL);
    }
    else if ( (unsigned __int64)*v2 > v23 || v25 > (int)v23 - *(_DWORD *)v2 + 1 )
    {
      LogError(-1072431089);
      PrintDebugMessage(42, (const void *)v10, (const void *)(unsigned int)((_DWORD)v9 - *(_DWORD *)v2), 0LL, 0LL);
      LODWORD(v11) = -1072431089;
    }
    v6 = *v2;
    v12 = 2;
    *v2 = v9;
  }
  else
  {
    v13 = ParseName(v7, Src);
    v11 = (const void *)v13;
    if ( v13 )
    {
      LogError(v13);
      PrintDebugMessage(41, v11, 0LL, 0LL, 0LL);
      return (unsigned int)v11;
    }
    v14 = Src;
    v15 = 256LL;
    LODWORD(v11) = 0;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v15;
    }
    while ( v15 );
    if ( v15 )
    {
      v16 = 256 - v15;
    }
    else
    {
      LODWORD(v11) = -1073741811;
      v16 = 0LL;
    }
    if ( v16 > 0x100 )
      v10 = 256LL;
    else
      v10 = v16 + 1;
    v12 = 1;
  }
  if ( (_DWORD)v11 )
    return (unsigned int)v11;
  v17 = *a2;
  if ( *a2 )
  {
    if ( *(unsigned int *)(v17 + 8) >= v10 )
      goto LABEL_30;
    HeapFree(v17);
    *a2 = 0LL;
  }
  if ( v10 > 0xFFFFFFEF )
  {
    LODWORD(v11) = -1072431089;
    LogError(-1072431089);
    v18 = (const void *)v10;
    v19 = 39;
LABEL_28:
    PrintDebugMessage(v19, v18, 0LL, 0LL, 0LL);
    goto LABEL_30;
  }
  v20 = HeapAlloc(*(_QWORD *)(a1 + 320), 1314407240, (int)v10 + 16);
  *a2 = v20;
  if ( !v20 )
  {
    LODWORD(v11) = -1073741670;
    LogError(-1073741670);
    v18 = 0LL;
    v19 = 126;
    goto LABEL_28;
  }
  *(_DWORD *)(v20 + 8) = v10;
LABEL_30:
  if ( *a2 )
  {
    *(_DWORD *)(*a2 + 12) = v10;
    *(_DWORD *)*a2 = v12;
    v21 = *a2;
    if ( v12 == 2 )
    {
      memmove((void *)(v21 + 16), v6, *(unsigned int *)(v21 + 12));
    }
    else
    {
      memmove((void *)(v21 + 16), Src, (unsigned int)(*(_DWORD *)(v21 + 12) - 1));
      *(_BYTE *)((unsigned int)(*(_DWORD *)(*a2 + 12) - 1) + *a2 + 16) = 0;
    }
  }
  return (unsigned int)v11;
}
