/*
 * XREFs of SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140547B70
 * Callers:
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 * Callees:
 *     SepCaptureTokenSecurityOperations @ 0x140128A58 (SepCaptureTokenSecurityOperations.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140547CC4 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140553FE0 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall SepCaptureTokenSecurityAttributesAndOperationsInformation(_QWORD *a1, char a2, _QWORD *a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbx
  _DWORD *v8; // rcx
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // edi
  _QWORD *PoolWithTag; // rax
  PVOID v14; // rcx
  PVOID P; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  if ( a2 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = (_DWORD *)a1[1];
    if ( !v5 )
      return -1073741811;
    if ( ((unsigned __int8)v5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0;
    v7 = *a1;
    if ( *a1 )
    {
      if ( (*a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = *a1;
      v6 = *(_DWORD *)(*a1 + 4LL);
      v8 = (_DWORD *)a1[1];
    }
    else
    {
      v8 = (_DWORD *)a1[1];
      if ( *v5 != 1 )
        return -1073741811;
    }
    result = SepCaptureTokenSecurityOperations(v8, v6, a2, &P);
    if ( result >= 0 )
    {
      if ( v7 )
      {
        LOBYTE(v11) = 1;
        LOBYTE(v10) = a2;
        v12 = SepCaptureTokenSecurityAttributesInformation(v7, v10, v11, &v16);
        if ( v12 < 0 )
        {
          v7 = 0LL;
          v14 = P;
          goto LABEL_20;
        }
        v7 = v16;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x6F416553u);
      v14 = P;
      if ( !PoolWithTag )
      {
        v12 = -1073741801;
        goto LABEL_28;
      }
      PoolWithTag[1] = P;
      *PoolWithTag = v7;
      *a3 = PoolWithTag;
      v12 = 0;
LABEL_20:
      if ( v12 >= 0 )
        return v12;
LABEL_28:
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      if ( v7 )
        SepFreeCapturedTokenSecurityAttributesInformation(v7);
      return v12;
    }
  }
  else if ( a1[1] )
  {
    *a3 = a1;
    return 0;
  }
  else
  {
    return -1073741811;
  }
  return result;
}
