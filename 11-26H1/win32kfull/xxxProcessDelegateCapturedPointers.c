/*
 * XREFs of xxxProcessDelegateCapturedPointers @ 0x140159BE0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x140159C9C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 */

void __fastcall xxxProcessDelegateCapturedPointers(__int64 a1, struct tagWND *a2, int a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  int v6; // ecx
  unsigned __int64 i; // rcx
  __int64 v8; // rcx
  int v9; // eax

  if ( *(_DWORD *)(a1 + 1244) )
  {
    v4 = (_QWORD *)(a1 + 1208);
    do
    {
      *(_DWORD *)(a1 + 1244) = 0;
      if ( (_QWORD *)*v4 != v4 )
      {
        v5 = v4[1];
        if ( (_QWORD *)v5 != v4 )
        {
          while ( 1 )
          {
            v6 = *(_DWORD *)(v5 + 48);
            if ( (v6 & 4) != 0 )
              break;
            v5 = *(_QWORD *)(v5 + 8);
            if ( (_QWORD *)v5 == v4 )
              goto LABEL_9;
          }
          *(_DWORD *)(v5 + 48) = v6 & 0xFFFFFFFB;
          for ( i = *(_QWORD *)(v5 + 24); i; i = *(_QWORD *)(v8 + 24) )
          {
            xxxNotifyCaptureChangeIfCaptured(i, a2, a3);
            if ( (_QWORD *)*v4 == v4 )
              break;
            v8 = v4[1];
            if ( (_QWORD *)v8 == v4 )
              break;
            while ( 1 )
            {
              v9 = *(_DWORD *)(v8 + 48);
              if ( (v9 & 4) != 0 )
                break;
              v8 = *(_QWORD *)(v8 + 8);
              if ( (_QWORD *)v8 == v4 )
                goto LABEL_9;
            }
            *(_DWORD *)(v8 + 48) = v9 & 0xFFFFFFFB;
          }
        }
      }
LABEL_9:
      ;
    }
    while ( *(_DWORD *)(a1 + 1244) );
  }
}
