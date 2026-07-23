/*
 * XREFs of MiPrepareVadDelete @ 0x14042D054
 * Callers:
 *     MiFreeVadRange @ 0x140026E34 (MiFreeVadRange.c)
 * Callees:
 *     MiVadDeleted @ 0x14002BEF0 (MiVadDeleted.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiLockAddressSpaceToo @ 0x1400C446C (MiLockAddressSpaceToo.c)
 */

__int64 __fastcall MiPrepareVadDelete(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  struct _KTHREAD *CurrentThread; // rcx

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v8 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  v9 = *(unsigned int *)(a1 + 28);
  *a5 = 0;
  v10 = v9 | v8;
  if ( a4 == v10 && a3 == v7 )
  {
    if ( *a2 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
      *a2 = 0;
    }
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 48) & 7) != 0 && (*(_DWORD *)(a1 + 48) & 7) != 6 )
    return 3221225631LL;
  if ( a3 == v7 )
    *a5 = 1;
  else
    *a5 = (a4 != v10) + 2;
  if ( *a2 )
    return 0LL;
  *a5 = 0;
  *a2 = 1;
  MiLockAddressSpaceToo((__int64)KeGetCurrentThread()->ApcState.Process, a1);
  v12 = MiVadDeleted(a1);
  v13 = -1073741267;
  if ( v12 == 1 )
    return (unsigned int)-1073741664;
  return v13;
}
