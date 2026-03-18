/*
 * XREFs of ?InsertInPointerDeviceFrameContactIdMgr@@YAHKPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C56F0
 * Callers:
 *     ExtractDeviceUsages @ 0x1C01C995C (ExtractDeviceUsages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InsertInPointerDeviceFrameContactIdMgr(unsigned int a1, struct tagHID_POINTER_DEVICE_INFO *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  __int64 v5; // rsi
  __int64 *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = *((_QWORD *)a2 + 87);
  v3 = 0;
  v5 = a1 % *((_DWORD *)a2 + 176);
  v6 = *(__int64 **)(*(_QWORD *)(v2 + 48) + 8 * v5);
  if ( !v6 )
    goto LABEL_5;
  do
  {
    if ( *((_DWORD *)v6 + 2) == a1 )
      break;
    v6 = (__int64 *)*v6;
  }
  while ( v6 );
  if ( !v6 )
  {
LABEL_5:
    v7 = Win32AllocPoolZInit(16LL, 2020635477LL);
    if ( v7 )
    {
      *(_DWORD *)(v7 + 8) = a1;
      v3 = 1;
      v8 = *(_QWORD *)(v2 + 48);
      *(_QWORD *)v7 = *(_QWORD *)(v8 + 8 * v5);
      *(_QWORD *)(v8 + 8 * v5) = v7;
    }
  }
  return v3;
}
