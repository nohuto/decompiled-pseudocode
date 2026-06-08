/*
 * XREFs of AcpiEval_OSC @ 0x1C000161C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     memmove @ 0x1C0005F80 (memmove.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C000F4D8 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_OSC(__int64 a1, __int64 a2, __int16 a3, _QWORD *a4)
{
  int v5; // ecx
  char *v8; // rbx
  int v9; // r13d
  unsigned int v10; // ebp
  char *PoolWithTag; // rax
  int v12; // edi
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF
  __int16 v17; // [rsp+80h] [rbp+18h] BYREF

  v17 = a3;
  v5 = *(_DWORD *)(a2 + 20);
  v8 = 0LL;
  if ( (unsigned int)(v5 - 1) > 4 )
  {
    v12 = -1073741823;
  }
  else
  {
    v9 = 4 * v5;
    v10 = 4 * v5 + 64;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x72637250u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = -1073741670;
LABEL_14:
      _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x10000u);
      return (unsigned int)v12;
    }
    memset(PoolWithTag, 0, (unsigned int)(v9 + 64));
    *(_DWORD *)v8 = 1130980673;
    *((_DWORD *)v8 + 3) = 4;
    v13 = 4LL;
    *((_DWORD *)v8 + 1) = 1129533279;
    *((_DWORD *)v8 + 2) = v10;
    *((_DWORD *)v8 + 4) = 1048578;
    *(_OWORD *)(v8 + 20) = *(_OWORD *)a2;
    v14 = *((_WORD *)v8 + 9);
    if ( v14 >= 4u )
      v13 = v14;
    *(_DWORD *)&v8[v13 + 20] = 0x40000;
    *(_DWORD *)&v8[v13 + 24] = *(_DWORD *)(a2 + 16);
    *(_DWORD *)&v8[v13 + 28] = 0x40000;
    *(_DWORD *)&v8[v13 + 32] = *(_DWORD *)(a2 + 20);
    *(_WORD *)&v8[v13 + 36] = 2;
    *(_WORD *)&v8[v13 + 38] = v9;
    memmove(&v8[v13 + 40], (const void *)(a2 + 24), (unsigned __int16)v9);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 0x10000u);
    v16 = 0LL;
    v12 = AcpiEvaluateMethod(a1, 0, (_DWORD)v8, (unsigned int)&v16, (__int64)&v17);
    if ( v12 >= 0 && v16 && a4 )
      *a4 = v16 + 16;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v12 < 0 )
    goto LABEL_14;
  return (unsigned int)v12;
}
