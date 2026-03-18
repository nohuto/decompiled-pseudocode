/*
 * XREFs of IoCheckFunctionAccess @ 0x14050FD6C
 * Callers:
 *     <none>
 * Callees:
 *     SeQuerySecurityAccessMask @ 0x1404393AC (SeQuerySecurityAccessMask.c)
 *     SeSetSecurityAccessMask @ 0x140495374 (SeSetSecurityAccessMask.c)
 */

NTSTATUS __stdcall IoCheckFunctionAccess(
        ACCESS_MASK GrantedAccess,
        UCHAR MajorFunction,
        UCHAR MinorFunction,
        ULONG IoControlCode,
        PVOID Arg1,
        PVOID Arg2)
{
  NTSTATUS v6; // r11d
  bool v7; // zf
  bool v9; // zf
  int v10; // edx
  int v11; // r9d
  int v12; // r10d
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( MajorFunction <= 9u )
  {
    if ( MajorFunction == 9 )
    {
      v9 = (~(_BYTE)GrantedAccess & 2) == 0;
      goto LABEL_19;
    }
    if ( !MajorFunction || MajorFunction == 2 )
      return v6;
    if ( MajorFunction != 3 )
    {
      switch ( MajorFunction )
      {
        case 4u:
          v7 = (GrantedAccess & 6) == 0;
          goto LABEL_8;
        case 5u:
          v10 = IopQueryOperationAccess[*(int *)Arg1];
LABEL_23:
          if ( !v10 )
            return v6;
          v9 = (~GrantedAccess & v10) == 0;
LABEL_19:
          if ( v9 )
            return v6;
          return -1073741790;
        case 6u:
          v10 = IopSetOperationAccess[*(int *)Arg1];
          goto LABEL_23;
        case 7u:
          v9 = (~(_BYTE)GrantedAccess & 8) == 0;
          goto LABEL_19;
        case 8u:
          v9 = (~(_BYTE)GrantedAccess & 0x10) == 0;
          goto LABEL_19;
      }
      return -1073741808;
    }
LABEL_18:
    v9 = (GrantedAccess & 1) != 0;
    goto LABEL_19;
  }
  switch ( MajorFunction )
  {
    case 0xAu:
      if ( (IopQueryFsOperationAccess[*(int *)Arg2] & ~GrantedAccess) != 0 )
        return -1073741790;
      return v6;
    case 0xBu:
      v9 = (IopSetFsOperationAccess[*(int *)Arg2] & ~GrantedAccess) == 0;
      goto LABEL_19;
    case 0xCu:
      goto LABEL_18;
  }
  if ( MajorFunction <= 0xCu )
    return -1073741808;
  if ( MajorFunction <= 0xFu )
  {
    v11 = (unsigned __int16)IoControlCode >> 14;
    if ( !v11 )
      return v6;
    v7 = (v11 & GrantedAccess) == 0;
  }
  else
  {
    if ( MajorFunction != 17 )
    {
      if ( MajorFunction == 20 )
      {
        SeQuerySecurityAccessMask(*(_DWORD *)Arg1, &v13);
      }
      else
      {
        if ( MajorFunction != 21 )
          return -1073741808;
        SeSetSecurityAccessMask(*(_DWORD *)Arg1, &v13);
      }
      v9 = (~v12 & v13) == 0;
      goto LABEL_19;
    }
    v7 = (GrantedAccess & 3) == 0;
  }
LABEL_8:
  if ( v7 )
    return -1073741790;
  return v6;
}
