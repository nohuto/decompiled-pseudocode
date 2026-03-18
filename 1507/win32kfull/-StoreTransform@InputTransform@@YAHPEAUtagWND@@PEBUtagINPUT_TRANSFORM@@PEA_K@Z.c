/*
 * XREFs of ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0227FAC
 * Callers:
 *     ResolveDCompInputHandleToPwnd @ 0x1C000776C (ResolveDCompInputHandleToPwnd.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F072C (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x1C0227EA8 (-InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z.c)
 */

struct _EX_PUSH_LOCK *__fastcall InputTransform::StoreTransform(
        InputTransform *this,
        struct tagWND *a2,
        const struct tagINPUT_TRANSFORM *a3,
        unsigned __int64 *a4)
{
  struct _EX_PUSH_LOCK *result; // rax
  struct _EX_PUSH_LOCK *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int128 v10; // xmm1
  char v11; // [rsp+48h] [rbp+20h] BYREF

  result = InitInputTransformList(this);
  v7 = result;
  if ( result )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, result);
    v8 = (_QWORD *)((char *)v7 + 8);
    if ( (_QWORD *)*v8 == v8
      || ((v9 = (_QWORD *)*v8, !a3) || v9[2] != *(_QWORD *)a3)
      && ((*((_DWORD *)v7 + 22) & 1) != 0 || RtlCompareMemory(a2, v9 + 3, 0x40uLL) != 64) )
    {
      *(_OWORD *)((char *)v7 + 24) = *(_OWORD *)a2;
      *(_OWORD *)((char *)v7 + 40) = *((_OWORD *)a2 + 1);
      *(_OWORD *)((char *)v7 + 56) = *((_OWORD *)a2 + 2);
      v10 = *((_OWORD *)a2 + 3);
      *((_DWORD *)v7 + 22) |= 1u;
      *(_OWORD *)((char *)v7 + 72) = v10;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
    return (struct _EX_PUSH_LOCK *)1;
  }
  return result;
}
