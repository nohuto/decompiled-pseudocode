/*
 * XREFs of AMLIAddNextNamespaceOverrideObject @ 0x1C00446F4
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C0044598 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0044954 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0044A40 (AMLICreateOverrideObjectDep.c)
 *     AMLIGetValidNamespaceName @ 0x1C0044CA4 (AMLIGetValidNamespaceName.c)
 *     OSReadRegValue @ 0x1C0066670 (OSReadRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverrideObject(__int64 a1, __int64 a2, char *a3)
{
  PVOID PoolWithTag; // rdi
  int valid; // ebx
  int v7; // eax
  SIZE_T v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v12; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v13[40]; // [rsp+38h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+38h] BYREF

  PoolWithTag = 0LL;
  valid = AMLIGetValidNamespaceName(a3, &v12);
  if ( valid < 0 )
    return (unsigned int)valid;
  LODWORD(NumberOfBytes) = 0;
  valid = OSReadRegValue(a3);
  if ( valid != -2147483643 )
    goto LABEL_5;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x496C6D41u);
  if ( !PoolWithTag )
  {
    valid = -1073741670;
LABEL_5:
    if ( valid < 0 )
      return (unsigned int)valid;
  }
  valid = OSReadRegValue(a3);
  if ( valid >= 0 )
  {
    memset(v13, 0, sizeof(v13));
    v7 = v12 == 1346716767
       ? AMLICreateOverrideObjectDep(PoolWithTag)
       : AMLICreateOverrideObjectDefault(PoolWithTag, (unsigned int)NumberOfBytes);
    valid = v7;
    if ( v7 >= 0 )
    {
      valid = CreateNameSpaceObject(
                gpheapGlobal,
                (unsigned __int8 *)a3,
                a2,
                *(struct _EX_RUNDOWN_REF **)(a2 + 40),
                (struct _EX_RUNDOWN_REF **)&NumberOfBytes,
                0);
      if ( valid < 0 )
      {
        FreeObjData((__int64)v13);
      }
      else
      {
        v8 = NumberOfBytes;
        v9 = *(_OWORD *)&v13[16];
        *(_OWORD *)(NumberOfBytes + 56) = *(_OWORD *)v13;
        v10 = *(_QWORD *)&v13[32];
        *(_OWORD *)(v8 + 72) = v9;
        *(_QWORD *)(v8 + 88) = v10;
        DereferenceObjectEx(v8);
      }
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)valid;
}
