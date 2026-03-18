/*
 * XREFs of PoCreateThermalRequest @ 0x1405C364C
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopAssociateThermalRequest @ 0x1405C3744 (PopAssociateThermalRequest.c)
 */

__int64 __fastcall PoCreateThermalRequest(_QWORD *a1, __int64 a2, __int64 a3, char *a4, int a5)
{
  _QWORD *v5; // rbx
  int v8; // edi
  _QWORD *PoolWithTag; // rax
  char v10; // r8
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v5 = 0LL;
  *a1 = 0LL;
  if ( !a2 || !a3 || !a4 )
  {
    v8 = -1073741811;
LABEL_8:
    if ( v8 >= 0 )
      return (unsigned int)v8;
    goto LABEL_11;
  }
  v8 = PoCaptureReasonContext(a4, 0LL, a3, 1, 0LL, (PVOID *)&v12);
  if ( v8 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x178uLL, 0x6C6F4350u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x178uLL);
      v10 = ~(a5 < 0);
      v5[3] = v12;
      *((_BYTE *)v5 + 16) = 100;
      v5[6] = MEMORY[0xFFFFF78000000008];
      v8 = PopAssociateThermalRequest(v5, a2, v10 & 1);
      if ( v8 >= 0 )
      {
        *a1 = v5;
        goto LABEL_8;
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
LABEL_11:
  if ( v12 )
    PoDestroyReasonContext(v12);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x6C6F4350u);
  return (unsigned int)v8;
}
