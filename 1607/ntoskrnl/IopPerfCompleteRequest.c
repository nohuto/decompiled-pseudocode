/*
 * XREFs of IopPerfCompleteRequest @ 0x1401CA67C
 * Callers:
 *     IovCompleteRequest @ 0x140700DA4 (IovCompleteRequest.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IopFreeIrpExtension @ 0x1400B1764 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x1400CF278 (IopIrpHasExtensionType.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IopProcessIoTracking @ 0x1401CAB20 (IopProcessIoTracking.c)
 */

void __fastcall IopPerfCompleteRequest(ULONG_PTR BugCheckParameter1, char a2)
{
  char v4; // cl
  char v5; // dl
  __int64 v6; // r14
  unsigned __int8 *v7; // rbx
  __int64 v8; // rcx
  signed __int32 v9; // esi
  int v10; // ecx
  ULONG_PTR v11; // [rsp+30h] [rbp-39h] BYREF
  signed __int32 v12; // [rsp+38h] [rbp-31h]
  unsigned __int8 *v13; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14; // [rsp+48h] [rbp-21h]
  __int64 v15; // [rsp+50h] [rbp-19h]
  signed __int32 v16; // [rsp+58h] [rbp-11h]
  unsigned __int8 v17; // [rsp+5Ch] [rbp-Dh]
  _QWORD v18[2]; // [rsp+60h] [rbp-9h] BYREF
  signed __int32 v19; // [rsp+70h] [rbp+7h]
  _QWORD *v20; // [rsp+78h] [rbp+Fh] BYREF
  int v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+84h] [rbp+1Bh]
  ULONG_PTR *v23; // [rsp+88h] [rbp+1Fh] BYREF
  int v24; // [rsp+90h] [rbp+27h]
  int v25; // [rsp+94h] [rbp+2Bh]

  if ( *(_WORD *)BugCheckParameter1 == 6 )
  {
    v4 = *(_BYTE *)(BugCheckParameter1 + 66);
    v5 = *(_BYTE *)(BugCheckParameter1 + 67);
    if ( v5 <= (char)(v4 + 1) )
    {
      v6 = 0LL;
      v7 = 0LL;
      if ( v5 <= v4 )
      {
        v7 = *(unsigned __int8 **)(BugCheckParameter1 + 184);
        if ( *((_QWORD *)v7 + 5) )
        {
          if ( (IopPerfStatus & 2) != 0
            && IopIrpHasExtensionType(BugCheckParameter1, 1u)
            && !IopIrpHasExtensionType(BugCheckParameter1, 4u) )
          {
            IopProcessIoTracking(
              MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 200) + 40LL),
              *(unsigned int *)(*((_QWORD *)v7 + 5) + 72LL));
            IopFreeIrpExtension(BugCheckParameter1, 1, 1);
          }
          v8 = *(_QWORD *)(*((_QWORD *)v7 + 5) + 8LL);
          if ( v8 && *v7 <= 0x1Bu )
            v6 = *(_QWORD *)(v8 + 8LL * *v7 + 112);
        }
        else
        {
          v6 = *((_QWORD *)v7 + 7);
        }
      }
      if ( (IopPerfStatus & 1) != 0 )
      {
        v22 = 0;
        v18[0] = v6;
        v18[1] = BugCheckParameter1;
        v9 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
        v19 = v9;
        v20 = v18;
        v21 = 20;
        EtwTraceKernelEvent((int)&v20, 1, 0x20000010u, 308, 4200450);
        if ( !v7 )
        {
LABEL_24:
          IopfCompleteRequest(BugCheckParameter1, a2);
          v25 = 0;
          v23 = &v11;
          v11 = BugCheckParameter1;
          v12 = v9;
          v24 = 12;
          EtwTraceKernelEvent((int)&v23, 1, 0x20000010u, 309, 4200450);
          return;
        }
        v15 = 0LL;
        v10 = *(_DWORD *)(BugCheckParameter1 + 48);
        v14 = *((_QWORD *)v7 + 8);
        v13 = v7;
        v16 = v9;
        v17 = v7[3];
        if ( v10 < 0 )
        {
          if ( (v7[3] & 0x80u) != 0 )
            goto LABEL_21;
        }
        else if ( (v7[3] & 0x40) != 0 )
        {
          goto LABEL_21;
        }
        if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v7[3] & 0x20) == 0 )
        {
          v7[3] |= 0xC0u;
          goto LABEL_23;
        }
LABEL_21:
        v15 = *((_QWORD *)v7 + 7);
        v14 = *((_QWORD *)v7 + 8);
LABEL_23:
        *((_QWORD *)v7 + 7) = IopPerfCompletionRoutine;
        *((_QWORD *)v7 + 8) = &v13;
        goto LABEL_24;
      }
    }
  }
  IopfCompleteRequest(BugCheckParameter1, a2);
}
