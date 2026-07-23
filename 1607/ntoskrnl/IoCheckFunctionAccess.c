/*
 * XREFs of IoCheckFunctionAccess @ 0x14054AD50
 * Callers:
 *     <none>
 * Callees:
 *     SeSetSecurityAccessMask @ 0x140503EAC (SeSetSecurityAccessMask.c)
 *     SeQuerySecurityAccessMask @ 0x14050447C (SeQuerySecurityAccessMask.c)
 */

NTSTATUS __stdcall IoCheckFunctionAccess(
        ACCESS_MASK GrantedAccess,
        UCHAR MajorFunction,
        UCHAR MinorFunction,
        ULONG IoControlCode,
        PVOID Arg1,
        PVOID Arg2)
{
  NTSTATUS v7; // r10d
  bool v8; // zf
  bool v10; // zf
  int v11; // edx
  NTSTATUS v12; // ecx
  int v13; // r9d
  int v14; // r11d
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  if ( MajorFunction <= 9u )
  {
    if ( MajorFunction == 9 )
    {
      v10 = (~(_BYTE)GrantedAccess & 2) == 0;
      goto LABEL_19;
    }
    if ( !MajorFunction || MajorFunction == 2 )
      return v7;
    if ( MajorFunction != 3 )
    {
      switch ( MajorFunction )
      {
        case 4u:
          v8 = (GrantedAccess & 6) == 0;
          goto LABEL_8;
        case 5u:
          v11 = IopQueryOperationAccess[*(int *)Arg1];
LABEL_23:
          if ( !v11 )
            return v7;
          v10 = (~GrantedAccess & v11) == 0;
LABEL_19:
          if ( v10 )
            return v7;
          return -1073741790;
        case 6u:
          v11 = IopSetOperationAccess[*(int *)Arg1];
          goto LABEL_23;
        case 7u:
          v10 = (~(_BYTE)GrantedAccess & 8) == 0;
          goto LABEL_19;
        case 8u:
          v10 = (~(_BYTE)GrantedAccess & 0x10) == 0;
          goto LABEL_19;
      }
      return -1073741808;
    }
LABEL_18:
    v10 = (GrantedAccess & 1) != 0;
    goto LABEL_19;
  }
  switch ( MajorFunction )
  {
    case 0xAu:
      v12 = 0;
      if ( (~GrantedAccess & IopQueryFsOperationAccess[*(int *)Arg2]) != 0 )
        return -1073741790;
      return v12;
    case 0xBu:
      v10 = (IopSetFsOperationAccess[*(int *)Arg2] & ~GrantedAccess) == 0;
      goto LABEL_19;
    case 0xCu:
      goto LABEL_18;
  }
  if ( MajorFunction <= 0xCu )
    return -1073741808;
  if ( MajorFunction <= 0xFu )
  {
    v13 = (unsigned __int16)IoControlCode >> 14;
    if ( !v13 )
      return v7;
    v8 = (v13 & GrantedAccess) == 0;
  }
  else
  {
    if ( MajorFunction != 17 )
    {
      if ( MajorFunction == 20 )
      {
        SeQuerySecurityAccessMask(*(_DWORD *)Arg1, &v15);
      }
      else
      {
        if ( MajorFunction != 21 )
          return -1073741808;
        SeSetSecurityAccessMask(*(_DWORD *)Arg1, &v15);
      }
      v10 = (~v14 & v15) == 0;
      goto LABEL_19;
    }
    v8 = (GrantedAccess & 3) == 0;
  }
LABEL_8:
  if ( v8 )
    return -1073741790;
  return v7;
}
