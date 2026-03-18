/*
 * XREFs of CopyObjBuffer @ 0x1C000D384
 * Callers:
 *     WriteObject @ 0x1C000EC20 (WriteObject.c)
 * Callees:
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044A2C (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall CopyObjBuffer(void *a1, size_t Size, __int64 a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // esi
  int v7; // r8d
  const void *v8; // rdi
  unsigned int v9; // ebx
  int v11; // r8d
  int ObjectTypeName; // eax

  v4 = Size;
  v5 = 0;
  v7 = *(unsigned __int16 *)(a3 + 2) - 1;
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        LogError(3222536201LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
        PrintDebugMessage(30, ObjectTypeName, 0, 0, 0LL);
        return (unsigned int)-1072431095;
      }
      v8 = *(const void **)(a3 + 32);
      v9 = *(_DWORD *)(a3 + 24);
    }
    else
    {
      v8 = *(const void **)(a3 + 32);
      v9 = *(_DWORD *)(a3 + 24) - 1;
    }
  }
  else
  {
    v8 = (const void *)(a3 + 16);
    v9 = 8;
  }
  if ( a1 != v8 )
  {
    memset(a1, 0, (unsigned int)Size);
    if ( v4 <= v9 )
      v9 = v4;
    memmove(a1, v8, v9);
  }
  return v5;
}
