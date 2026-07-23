/*
 * XREFs of RtlpFindNextActivationContextSection @ 0x18001AFCC
 * Callers:
 *     RtlpFindFirstActivationContextSection @ 0x1800193BC (RtlpFindFirstActivationContextSection.c)
 *     RtlFindActivationContextSectionGuid @ 0x180019EE0 (RtlFindActivationContextSectionGuid.c)
 *     RtlFindActivationContextSectionString @ 0x18001AD70 (RtlFindActivationContextSectionString.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x18001B160 (RtlpLocateActivationContextSection.c)
 */

__int64 __fastcall RtlpFindNextActivationContextSection(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  struct _TEB *v4; // r12
  const struct _ACTIVATION_CONTEXT_DATA *SystemDefaultActivationContextData; // rdi
  __int64 ActivationContext; // rbx
  _PEB *ProcessEnvironmentBlock; // r13
  int v10; // ebp
  int v11; // r15d
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  int v16; // [rsp+78h] [rbp+10h]
  __int64 v17; // [rsp+80h] [rbp+18h]

  v17 = a3;
  v16 = a2;
  v4 = NtCurrentTeb();
  SystemDefaultActivationContextData = 0LL;
  ActivationContext = 0LL;
  ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
  if ( a4 )
    *a4 = 0LL;
  v10 = 1;
  v11 = 2;
  while ( 1 )
  {
    v12 = *(_DWORD *)(a1 + 20);
    if ( !v12 )
    {
      ActivationContextStackPointer = v4->ActivationContextStackPointer;
      if ( ActivationContextStackPointer && ActivationContextStackPointer->ActiveFrame )
      {
        ActivationContext = (__int64)ActivationContextStackPointer->ActiveFrame->ActivationContext;
        if ( ActivationContext )
        {
          if ( ActivationContext == -4 )
            SystemDefaultActivationContextData = ProcessEnvironmentBlock->SystemDefaultActivationContextData;
          else
            SystemDefaultActivationContextData = *(const struct _ACTIVATION_CONTEXT_DATA **)(ActivationContext + 24);
        }
        if ( SystemDefaultActivationContextData )
        {
          *(_DWORD *)(a1 + 20) = 1;
          goto LABEL_8;
        }
      }
LABEL_20:
      SystemDefaultActivationContextData = ProcessEnvironmentBlock->ActivationContextData;
      ActivationContext = 0LL;
      if ( SystemDefaultActivationContextData )
      {
        *(_DWORD *)(a1 + 20) = 2;
        goto LABEL_8;
      }
LABEL_22:
      SystemDefaultActivationContextData = ProcessEnvironmentBlock->SystemDefaultActivationContextData;
      ActivationContext = -4LL;
      if ( SystemDefaultActivationContextData )
      {
        *(_DWORD *)(a1 + 20) = 3;
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_20;
    if ( v13 == 1 )
      goto LABEL_22;
LABEL_7:
    if ( *(_DWORD *)(a1 + 20) > 3u )
      return 3221225701LL;
LABEL_8:
    if ( !SystemDefaultActivationContextData )
      return 3222601729LL;
    result = RtlpLocateActivationContextSection(
               (_DWORD)SystemDefaultActivationContextData,
               *(_QWORD *)(a1 + 8),
               *(_DWORD *)(a1 + 16),
               a2,
               a3);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result != -1072365567 || *(_DWORD *)(a1 + 20) == 3 )
      return result;
    a3 = v17;
    a2 = v16;
  }
  if ( ActivationContext == -4 || (v11 = 0, ActivationContext) )
    v10 = 0;
  *(_DWORD *)(a1 + 24) = v11 | v10;
  if ( a4 )
  {
    if ( ActivationContext == -4 )
      ActivationContext = 0LL;
    *a4 = ActivationContext;
  }
  return 0LL;
}
