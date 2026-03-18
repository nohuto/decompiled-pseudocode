/*
 * XREFs of ?CommitBuffer@UmfdUMBuffer@@QEAAPEAXK@Z @ 0x1C02D5D20
 * Callers:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D49CC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 * Callees:
 *     ?AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x1C02D5C2C (-AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z.c)
 *     ?CommitReservedBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x1C02D5DA8 (-CommitReservedBuffer@UmfdUMBuffer@@AEAA_NK@Z.c)
 */

void *__fastcall UmfdUMBuffer::CommitBuffer(UmfdUMBuffer *this, __int64 a2)
{
  unsigned int v2; // esi
  void *v4; // rdi
  void *result; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( (unsigned int)a2 <= *((_DWORD *)this + 9) )
  {
    v4 = 0LL;
    if ( *((_QWORD *)this + 1) )
    {
      BaseAddress = (PVOID)*((_QWORD *)this + 1);
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      *((_QWORD *)this + 1) = 0LL;
      *((_DWORD *)this + 4) = 0;
    }
    if ( UmfdUMBuffer::CommitReservedBuffer(this, v2) )
      v4 = (void *)*((_QWORD *)this + 3);
  }
  else
  {
    v4 = 0LL;
    if ( UmfdUMBuffer::AllocTemporaryBuffer(this, a2) )
      v4 = (void *)*((_QWORD *)this + 1);
  }
  result = v4;
  *(_QWORD *)this = v4;
  return result;
}
