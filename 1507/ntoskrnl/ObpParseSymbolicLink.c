/*
 * XREFs of ObpParseSymbolicLink @ 0x140410E40
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140007C50 (ObReferenceObjectByPointer.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 */

NTSTATUS __fastcall ObpParseSymbolicLink(
        unsigned __int16 *Object,
        POBJECT_TYPE ObjectType,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        _QWORD *a10)
{
  unsigned int v13; // ebp
  unsigned int v14; // ebx
  unsigned __int16 v15; // r12
  char *PoolWithTag; // r15
  char *v17; // rcx
  NTSTATUS result; // eax

  if ( (*((_DWORD *)Object + 7) & 2) != 0 && !(unsigned __int8)RtlIsSandboxedToken(0LL, a4) )
    return -1073741772;
  if ( *a7 )
  {
    if ( **((_WORD **)a7 + 1) != 92 )
      return -1073741788;
    goto LABEL_4;
  }
  if ( ObjectType != ObpSymbolicLinkObjectType )
    goto LABEL_4;
  result = ObReferenceObjectByPointer(Object, 0, ObjectType, a4);
  if ( result >= 0 )
  {
    *a10 = Object;
    return result;
  }
  if ( result == -1073741788 )
  {
LABEL_4:
    v13 = Object[4];
    if ( Object[4]
      && *(_WORD *)(*((_QWORD *)Object + 2) + 2 * ((unsigned __int64)Object[4] >> 1) - 2) == 92
      && *a7
      && **((_WORD **)a7 + 1) == 92 )
    {
      v13 -= 2;
    }
    v14 = v13 + *a7;
    if ( v14 > 0xFFF0 )
    {
      return -1073741562;
    }
    else
    {
      v15 = *(_WORD *)(a6 + 2);
      if ( v15 <= (unsigned __int16)v14 )
      {
        v15 = v14 + 2;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v14 + 2), 0x6D4E624Fu);
        if ( !PoolWithTag )
          return -1073741670;
      }
      else
      {
        PoolWithTag = *(char **)(a6 + 8);
      }
      if ( *a7 )
        memmove(&PoolWithTag[v13], *((const void **)a7 + 1), *a7);
      memmove(PoolWithTag, *((const void **)Object + 2), v13);
      *(_WORD *)&PoolWithTag[2 * ((unsigned __int64)(unsigned __int16)v14 >> 1)] = 0;
      v17 = *(char **)(a6 + 8);
      if ( PoolWithTag != v17 )
      {
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
      }
      *(_QWORD *)(a6 + 8) = PoolWithTag;
      result = 260;
      *(_WORD *)a6 = v14;
      *(_WORD *)(a6 + 2) = v15;
    }
  }
  return result;
}
