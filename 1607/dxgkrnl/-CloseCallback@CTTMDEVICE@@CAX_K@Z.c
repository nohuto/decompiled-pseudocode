/*
 * XREFs of ?CloseCallback@CTTMDEVICE@@CAX_K@Z @ 0x1C017FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall CTTMDEVICE::CloseCallback(void *a1)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rdx
  struct _KEVENT *v5; // rcx

  if ( !a1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v2 + 24) = 4155LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 156, 1u);
  v4 = (unsigned int)(v3 >> 31);
  LODWORD(v4) = v3 % 32;
  *((_DWORD *)a1 + 2 * v4 + 157) = 1073741826;
  *((_DWORD *)a1 + 2 * (unsigned int)(v3 % 32) + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  if ( *((_BYTE *)a1 + 905) )
  {
    operator delete(a1);
  }
  else
  {
    ExReInitializeRundownProtection((PEX_RUNDOWN_REF)a1 + 6);
    v5 = (struct _KEVENT *)*((_QWORD *)a1 + 7);
    if ( v5 )
    {
      KeSetEvent(v5, 0, 0);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
}
