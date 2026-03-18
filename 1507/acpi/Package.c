/*
 * XREFs of Package @ 0x1C0012430
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall Package(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // r14
  __int64 v8; // rax
  int v10; // ecx
  __int64 v11; // rdx

  v4 = ValidateArgTypes(a2[10], 0LL, "I");
  if ( !v4 )
  {
    v5 = a2[10];
    if ( *(_QWORD *)(v5 + 16) > 0xFFuLL )
    {
      v4 = -1072431100;
      LogError(3222536196LL);
      v10 = 118;
      v11 = *(_QWORD *)(a2[10] + 16LL);
    }
    else
    {
      *(_DWORD *)(a2[11] + 24LL) = 40 * *(_DWORD *)(v5 + 16) + 8;
      v6 = (_DWORD *)HeapAlloc(gpheapGlobal, 1196118088LL, *(unsigned int *)(a2[11] + 24LL));
      v7 = v6;
      if ( v6 )
      {
        *(_WORD *)(a2[11] + 2LL) = 4;
        memset(v6, 0, *(unsigned int *)(a2[11] + 24LL));
        *(_QWORD *)(a2[11] + 32LL) = v7;
        *v7 = *(unsigned __int8 *)(a2[10] + 16LL);
        v8 = HeapAlloc(a1 + 432, 1297237576LL, 56LL);
        if ( v8 )
        {
          *(_QWORD *)(v8 + 8) = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v8;
          *(_QWORD *)(v8 + 24) = ParsePackage;
          *(_DWORD *)v8 = 1179077456;
          *(_QWORD *)(v8 + 32) = v7;
          *(_QWORD *)(v8 + 48) = a2[5];
          return v4;
        }
        v4 = -1072431102;
        LogError(3222536194LL);
        LODWORD(v11) = 0;
        v10 = 153;
      }
      else
      {
        v4 = -1073741670;
        LogError(3221225626LL);
        v10 = 117;
        LODWORD(v11) = *(_DWORD *)(a2[11] + 24LL);
      }
    }
    PrintDebugMessage(v10, v11, 0, 0, 0LL);
  }
  return v4;
}
