/*
 * XREFs of sub_140001C10 @ 0x140001C10
 * Callers:
 *     sub_140001914 @ 0x140001914 (sub_140001914.c)
 * Callees:
 *     sub_140001CB8 @ 0x140001CB8 (sub_140001CB8.c)
 *     sub_140001E9C @ 0x140001E9C (sub_140001E9C.c)
 *     memset @ 0x14000C48C (memset.c)
 */

__int64 __fastcall sub_140001C10(int a1, _DWORD *a2, int a3)
{
  int v6; // r8d
  int v7; // r9d
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed __int32 v11[8]; // [rsp+0h] [rbp-A8h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION v12; // [rsp+30h] [rbp-78h] BYREF

  v12.Size = 0;
  memset(&v12.ProcessHandle, 0, 0x60uLL);
  v7 = 2080;
  if ( (*a2 & 8) != 0 )
  {
    v7 = 10272;
    if ( (*a2 & 6) == 2 )
      v7 = 14368;
  }
  result = sub_140001E9C(a3, a1, v6, v7, &v12);
  if ( (int)result < 0 )
  {
    *(_DWORD *)qword_14001FBD0 = 1;
    _InterlockedOr(v11, 0);
    *((_DWORD *)qword_14001FBD0 + 2) = 1063;
    *((_DWORD *)qword_14001FBD0 + 1) = result;
    *((_QWORD *)qword_14001FBD0 + 2) = sub_140001C10;
  }
  else
  {
    *(_DWORD *)qword_14001FBD0 = 2;
    result = sub_140001CB8(v9, &v12);
    v10 = result;
    if ( (int)result < 0 )
    {
      *(_DWORD *)qword_14001FBD0 = 1;
      _InterlockedOr(v11, 0);
      *((_DWORD *)qword_14001FBD0 + 2) = 1088;
      *((_DWORD *)qword_14001FBD0 + 1) = result;
      *((_QWORD *)qword_14001FBD0 + 2) = sub_140001C10;
      NtTerminateProcess(v12.ProcessHandle, result);
      return v10;
    }
  }
  return result;
}
