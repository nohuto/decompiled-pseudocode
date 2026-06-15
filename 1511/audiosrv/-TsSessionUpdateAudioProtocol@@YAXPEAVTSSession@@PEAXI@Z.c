/*
 * XREFs of ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18003AE84
 * Callers:
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18003AD7C (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdDisconnect@@YAXK@Z @ 0x18003B164 (-TsSessionIdDisconnect@@YAXK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x18009D690 (-TsSessionIdTerminate@@YAJK@Z.c)
 * Callees:
 *     ?TsSessionMayBeDeleted@@YAHPEAVTSSession@@@Z @ 0x18002E514 (-TsSessionMayBeDeleted@@YAHPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ??_GTSSession@@QEAAPEAXI@Z @ 0x18009BE30 (--_GTSSession@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18009C904 (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 */

void __fastcall TsSessionUpdateAudioProtocol(struct TSSession *a1, void *a2, int a3)
{
  int v3; // edi
  _QWORD *v7; // r14
  __int64 v8; // rcx
  unsigned int *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // edx
  _DWORD v12[8]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  if ( a3 != 0xFFFF && a3 )
    v3 = ++dword_1800E6AEC;
  if ( *((_DWORD *)a1 + 1) != a3 || *((_DWORD *)a1 + 2) != v3 )
  {
    v7 = (_QWORD *)*((_QWORD *)a1 + 2);
    *((_DWORD *)a1 + 1) = a3;
    *((_DWORD *)a1 + 2) = v3;
    while ( v7 )
    {
      v9 = (unsigned int *)v7[2];
      v7 = (_QWORD *)*v7;
      v12[0] = 32;
      v12[1] = 0x2000;
      v10 = *v9;
      v12[6] = a3;
      v12[7] = v3;
      GenerateMediaEvent(v12, v10);
    }
  }
  if ( (unsigned int)TsSessionMayBeDeleted(a1) )
  {
    TList<TSSession>::RemoveAt(v8, a2);
    TSSession::`scalar deleting destructor'(a1, v11);
  }
}
