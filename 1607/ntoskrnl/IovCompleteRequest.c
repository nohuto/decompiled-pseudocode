/*
 * XREFs of IovCompleteRequest @ 0x140700DA4
 * Callers:
 *     <none>
 * Callees:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     IopPerfCompleteRequest @ 0x1401CA67C (IopPerfCompleteRequest.c)
 *     IovpLogStackTrace @ 0x1407016C4 (IovpLogStackTrace.c)
 *     IovpCompleteRequest1 @ 0x14070B0E0 (IovpCompleteRequest1.c)
 */

void __fastcall IovCompleteRequest(ULONG_PTR BugCheckParameter1, char a2)
{
  __int64 v4; // rdx
  ULONG_PTR v5; // r8
  ULONG_PTR v6; // rax
  __int128 *v7; // rcx
  int v8; // edx
  _QWORD v9[5]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v10[3]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v11; // [rsp+70h] [rbp-9h]
  __int128 v12; // [rsp+78h] [rbp-1h]
  __int128 v13; // [rsp+88h] [rbp+Fh]
  __int128 v14; // [rsp+98h] [rbp+1Fh]
  __int128 v15; // [rsp+A8h] [rbp+2Fh]
  __int64 v16; // [rsp+B8h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+5Fh]

  IovpLogStackTrace(BugCheckParameter1);
  if ( !IovpDisabledWithoutReboot )
  {
    if ( *(char *)(BugCheckParameter1 + 67) > (char)(*(_BYTE *)(BugCheckParameter1 + 66) + 1)
      || (v4 = 6LL, *(_WORD *)BugCheckParameter1 != 6) )
    {
      KeBugCheckEx(0x44u, BugCheckParameter1, 0x42EuLL, 0LL, 0LL);
    }
    v5 = *(_QWORD *)(BugCheckParameter1 + 104);
    if ( v5 )
      KeBugCheckEx(0xC9u, 7uLL, v5, BugCheckParameter1, 0LL);
    v6 = *(int *)(BugCheckParameter1 + 48);
    if ( (_DWORD)v6 == 259 || (_DWORD)v6 == -1 )
      KeBugCheckEx(0xC9u, 6uLL, v6, BugCheckParameter1, 0LL);
    if ( KeGetCurrentIrql() > 2u )
      KeBugCheckEx(0xC9u, 0xEuLL, KeGetCurrentIrql(), BugCheckParameter1, 0LL);
  }
  LOBYTE(v4) = a2;
  v9[4] = retaddr;
  IovpCompleteRequest1(BugCheckParameter1, v4, v9);
  if ( (!IovpDisabledWithoutReboot || v9[0])
    && *(_BYTE *)(BugCheckParameter1 + 67) <= *(_BYTE *)(BugCheckParameter1 + 66) )
  {
    v7 = *(__int128 **)(BugCheckParameter1 + 184);
    v8 = *(_DWORD *)(BugCheckParameter1 + 48);
    v10[2] = v9;
    v10[1] = *((_QWORD *)v7 + 8);
    v10[0] = v7;
    v12 = *v7;
    v13 = v7[1];
    v14 = v7[2];
    v15 = v7[3];
    v16 = *((_QWORD *)v7 + 8);
    if ( v8 < 0 )
    {
      if ( *((char *)v7 + 3) < 0 )
        goto LABEL_21;
    }
    else if ( (*((_BYTE *)v7 + 3) & 0x40) != 0 )
    {
      goto LABEL_21;
    }
    if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (*((_BYTE *)v7 + 3) & 0x20) == 0 )
    {
      v11 = 0LL;
      *((_BYTE *)v7 + 3) |= 0xE0u;
      goto LABEL_23;
    }
LABEL_21:
    v11 = *((_QWORD *)v7 + 7);
LABEL_23:
    *((_QWORD *)v7 + 7) = IovpLocalCompletionRoutine;
    *((_QWORD *)v7 + 8) = v10;
  }
  if ( (IopFunctionPointerMask & 2) != 0 )
    IopPerfCompleteRequest(BugCheckParameter1, a2);
  else
    IopfCompleteRequest(BugCheckParameter1, a2);
}
